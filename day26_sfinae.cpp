#include <type_traits>

template<typename Float>
//typename =std::enable_if_t<std::is_floating_point_v<Float>>>
auto go(const Float v1, const Float v2) requires std::is_floating_point_v<Float>{
    return v1 + v2;
}

int main(){
    go(1.3, 2.3);
}