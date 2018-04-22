#ifndef SAMPLER_H
#define SAMPLER_H

# include <vector>
# include "Point2D.h"
class Sampler {
protected:
    int m_num_samples;
    int m_num_sets;
    std::vector<Point2D> m_samples;
    
    int m_count;
    int m_jump;
public:
    Sampler();
    Sampler(const int num_samples, const int num_sets = 5);
    ~Sampler();
    
    const int get_n_samples() const;
    
    const Point2D& next_sample();
    virtual void generate_samples() = 0;    
};

#endif 

