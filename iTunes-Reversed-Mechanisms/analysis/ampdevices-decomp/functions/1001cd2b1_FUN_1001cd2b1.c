// name: FUN_1001cd2b1
// address: 1001cd2b1

ulong FUN_1001cd2b1(uint param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  *param_3 = 0;
  if (param_1 == 7) {
    uVar2 = _IOPMAssertionCreate(param_2,0xff,param_3);
    return uVar2;
  }
  uVar3 = FUN_1001b8336(&DAT_1008c53f8);
  FUN_1001b7b04(local_48,(&PTR_s_common_10088f640)[param_1]);
  uVar4 = FUN_1001b8336(local_48);
  FUN_1001bb78a(local_38,"%S.%S",uVar3,uVar4);
  FUN_1001b7a50(local_48);
  uVar3 = FUN_1001b8d0c(local_38);
  uVar1 = _IOPMAssertionCreateWithDescription(0,param_2,uVar3,0,0,0,0,param_3);
  FUN_10017060f(uVar3);
  FUN_1001b7a50(local_38);
  return (ulong)uVar1;
}

