#include <vector>
#include <iostream>

auto rotate(const std::vector<std::vector<int>>& mat){
    std::vector<std::vector<int>> toBeReturned (mat[0].size(), std::vector<int>(mat.size()));
    for(size_t i{}; i < toBeReturned .size(); ++i){
        for(size_t j{}; j < toBeReturned[0].size(); ++j){
              toBeReturned[i][j] = mat[j][mat[0].size()-1-i]; //counter-clockwise 90
//              toBeReturned[i][j] = mat[mat.size()-1-j][i]; //clockwise 90

        }
    }
    return toBeReturned;
}

int main() {
    std::vector<std::vector<int>> cherry = {{0,4},
                                            {4,4},
                                            {4,0}};
    auto rotated = rotate(cherry);
    for(size_t i{}; i < rotated.size(); ++i){
        for(size_t j{}; j < rotated[0].size(); ++j){
            std::cout << rotated[i][j] << " ";
        }
        std::cout << "\n";
    }

}
