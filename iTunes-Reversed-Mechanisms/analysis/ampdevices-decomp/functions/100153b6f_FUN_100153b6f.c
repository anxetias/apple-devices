// name: FUN_100153b6f
// address: 100153b6f

undefined8 * FUN_100153b6f(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  std::__get_sp_mut(param_2);
  std::__sp_mut::lock();
  lVar2 = param_2[1];
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  std::__sp_mut::unlock();
  return param_1;
}

