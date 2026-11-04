// name: FUN_100138bf8
// address: 100138bf8

void FUN_100138bf8(__shared_count *param_1)

{
  __shared_count *p_Var1;
  long lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1008399e8;
  FUN_1001a8c12(param_1 + 0xd8);
  FUN_1001b7a50(param_1 + 200);
  FUN_1001aaad2(param_1 + 0xc0);
  p_Var1 = *(__shared_count **)(param_1 + 0xb0);
  if (p_Var1 == param_1 + 0x90) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (p_Var1 == (__shared_count *)0x0) goto LAB_100138c60;
  }
  (**(code **)(*(long *)p_Var1 + lVar2))();
LAB_100138c60:
  *(undefined **)param_1 = PTR_vtable_10082c9c0 + 0x10;
  std::condition_variable::~condition_variable((condition_variable *)(param_1 + 0x58));
  std::mutex::~mutex((mutex *)(param_1 + 0x18));
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 0x10));
  std::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}

