// name: FUN_100138fc0
// address: 100138fc0

void FUN_100138fc0(undefined8 *param_1,undefined8 param_2)

{
  __thread_struct *this;
  
  this = (__thread_struct *)*param_1;
  *param_1 = param_2;
  if (this != (__thread_struct *)0x0) {
    std::__thread_struct::~__thread_struct(this);
    operator_delete(this);
    return;
  }
  return;
}

