// name: FUN_100138b14
// address: 100138b14

void FUN_100138b14(__shared_count *param_1)

{
  *(undefined **)param_1 = PTR_vtable_10082c9c0 + 0x10;
  std::condition_variable::~condition_variable((condition_variable *)(param_1 + 0x58));
  std::mutex::~mutex((mutex *)(param_1 + 0x18));
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 0x10));
  std::__shared_count::~__shared_count(param_1);
  return;
}

