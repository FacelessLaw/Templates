#ifndef __R_VECTOR_CPP__
#define __R_VECTOR_CPP__

class R_VECTOR {
    double norm;
    double angle;
public:
    R_VECTOR(): norm(), angle() {}
    R_VECTOR(double _norm, double _angle): norm(_norm), angle(_angle) {}
    R_VECTOR(double _value): norm(_value), angle(0) {}

    double get_norm() const { return norm; }
    double get_angle() const { return angle; }

    friend bool operator ==(const R_VECTOR &f, const R_VECTOR &s);
    friend bool operator !=(const R_VECTOR &f, const R_VECTOR &s);
    friend bool operator <(const R_VECTOR &f, const R_VECTOR &s);
    friend bool operator >(const R_VECTOR &f, const R_VECTOR &s);
};

bool operator ==(const R_VECTOR &f, const R_VECTOR &s) {
    return f.get_norm() == s.get_norm() && f.get_angle() == s.get_angle();
}
bool operator !=(const R_VECTOR &f, const R_VECTOR &s) {
    return f.get_norm() != s.get_norm() || f.get_angle() != s.get_angle();
}
bool operator <(const R_VECTOR &f, const R_VECTOR &s) {
    if (f.get_norm() < s.get_norm())
        return true;
    if (f.get_norm() == s.get_norm())
        return f.get_angle() < s.get_angle();
    return false;
}
bool operator >(const R_VECTOR &f, const R_VECTOR &s) {
    if (f.get_norm() > s.get_norm())
        return true;
    if (f.get_norm() == s.get_norm())
        return f.get_angle() > s.get_angle();
    return false;
}

#endif