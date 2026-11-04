// name: FUN_100626ef4
// address: 100626ef4

undefined4 FUN_100626ef4(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == 0) {
    uVar1 = 0xffffff94;
  }
  else {
    uVar1 = FUN_1001d302b(*(undefined8 *)(param_1 + 0x68),*param_2,0,0);
    _sqlite3_free((void *)*param_2);
    *param_2 = 0;
  }
  return uVar1;
}

