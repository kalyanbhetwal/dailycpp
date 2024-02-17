#include <iostream>
#include <vector>

class ParticleSystem{
    struct Particle{
        float x{0.01f};
        float y{0.01f};
        float z{0.01f};
        float speed{0.01f};
        float lifetime{0.01f};
        void Move(){ /*Move Particles*/};
    };
    public:
    void Simulation(){
        for(size_t i=0; i < m_particles.size(); ++i){
            m_particles[i].Move();
        }
    }
    private:
     std::vector<Particle> m_particles;
};

int main(){
    ParticleSystem p;
    p.Simulation();
    return 0;
}