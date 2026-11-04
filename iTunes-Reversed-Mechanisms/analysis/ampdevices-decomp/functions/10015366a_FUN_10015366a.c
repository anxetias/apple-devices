// name: FUN_10015366a
// address: 10015366a

void FUN_10015366a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  std::__get_sp_mut(param_1);
  std::__sp_mut::lock();
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  std::__sp_mut::unlock();
  return;
}

