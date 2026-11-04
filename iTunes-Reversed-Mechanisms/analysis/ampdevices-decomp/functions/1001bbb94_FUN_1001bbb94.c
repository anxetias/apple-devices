// name: FUN_1001bbb94
// address: 1001bbb94

undefined8 * FUN_1001bbb94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_1001734f5(0,param_2,0x8000100,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
  if (lVar1 != 0) {
    FUN_1001bb9b6(local_30,lVar1,param_3);
    FUN_1001b80b2(param_1,local_30);
    FUN_1001b811c(local_30);
    FUN_10017060f(lVar1);
  }
  return param_1;
}

