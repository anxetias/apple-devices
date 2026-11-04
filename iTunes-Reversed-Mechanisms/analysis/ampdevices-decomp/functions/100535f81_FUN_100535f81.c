// name: FUN_100535f81
// address: 100535f81

undefined4
FUN_100535f81(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  lVar2 = FUN_10017444a(DAT_1008c4d90,param_1,param_2,0x8000100,0);
  if (lVar2 == 0) {
    uVar1 = 0xffffffd5;
  }
  else {
    uVar1 = FUN_100535cc5(lVar2,param_3,param_4,param_5,param_6,param_7);
    FUN_10017060f(lVar2);
  }
  return uVar1;
}

