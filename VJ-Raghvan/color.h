#ifndef COLOR_H
#define COLOR_H

class Color {
private:
    int _r, _g, _b;
public:
    Color();
    Color(int, int, int);
    virtual ~Color();
    Color(const Color&);
    void set_color(int, int, int);
    int get_r() const;
    int get_g() const;
    int get_b() const;
    Color& operator=(const Color &other);
    friend std::ostream& operator<<(std::ostream& os, const Color& c);
    friend std::istream& operator>>(std::istream& is, Color& c);
};

#endif