// name: FUN_1001aab60
// address: 1001aab60

undefined8 FUN_1001aab60(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0) {
    FUN_10032f0f2(param_1);
  }
  else {
    uVar1 = _CFErrorCopyUserInfo();
    FUN_1001a8d40(param_1,uVar1);
  }
  return param_1;
}

