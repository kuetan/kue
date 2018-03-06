#include "vector"

struct _params {
  std::vector<float> w1;
  std::vector<float> b1;
  std::vector<float> w2;
  std::vector<float> b2;
} ;
  
struct _grads {
  std::vector<float> w1;
  std::vector<float> b1;
  std::vector<float> w2;
  std::vector<float> b2;
} ;

struct _layers {
  std::vector<float> w1;
  std::vector<float> b1;
  std::vector<float> w2;
  std::vector<float> b2;
} ;
  
typedef struct _params * params;
typedef struct _grads * grads;
typedef struct _layers * layers;
