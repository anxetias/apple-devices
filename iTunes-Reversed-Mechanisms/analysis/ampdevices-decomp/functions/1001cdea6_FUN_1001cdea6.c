// name: FUN_1001cdea6
// address: 1001cdea6

undefined1 FUN_1001cdea6(undefined8 param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long local_28;
  
  local_28 = 0;
  uVar1 = FUN_1001cd899(param_1,&local_28);
  lVar2 = local_28;
  if (param_2 != (undefined2 *)0x0) {
    if (local_28 == 0) {
      *param_2 = 0;
      lVar2 = 0;
    }
    else {
      FUN_1001e115f(local_28,param_2);
      lVar2 = local_28;
    }
  }
  FUN_10017060f(lVar2);
  return uVar1;
}

