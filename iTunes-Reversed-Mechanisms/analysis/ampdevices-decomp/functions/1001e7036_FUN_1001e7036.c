// name: FUN_1001e7036
// address: 1001e7036

undefined4
FUN_1001e7036(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             uint param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
  uVar2 = FUN_1001735df(DAT_1008c4d98,param_1,param_2,uVar3);
  uVar3 = FUN_1001735df(DAT_1008c4d98,param_3,param_4,uVar3);
  uVar1 = FUN_100173bb7(uVar2,uVar3,
                        param_5 << 4 & 0x200 |
                        (param_5 << 4 & 0x80 | param_5 & 1) + (param_5 & 0x10) * 4 | 0x130);
  FUN_10017060f(uVar2);
  FUN_10017060f(uVar3);
  return uVar1;
}

