#ifndef REGULAR_H
#define REGULAR_H

class Regular : public Sampler {
    public:
        Regular();
        Regular(const int num_samples, const int num_sets = 1);

        ~Regular();
        
        virtual void generate_samples() override;
};


#endif 

