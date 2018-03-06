#include "twolayer.hpp"
#include <stdio.h>

class TwoLayerNet {
  public: 
  params param;
  layers layer;
  TwoLayerNet()
  {
    param  = new _params;
    param->w1.push_back(0.1);
    param->b1.push_back(0.0);
    param->w2.push_back(0.1);
    param->b2.push_back(0.0);
    layer  = new _layers;
    layer->w1.push_back(0.1);
    layer->b1.push_back(0.0);
    layer->w2.push_back(0.1);
    layer->b2.push_back(0.0);

  }
  ~TwoLayerNet()
  {
    delete param;
    delete layer;
  }
};


int main () {
  TwoLayerNet twolayer;
  printf("%f\n",twolayer.param->w1[0]);
}
