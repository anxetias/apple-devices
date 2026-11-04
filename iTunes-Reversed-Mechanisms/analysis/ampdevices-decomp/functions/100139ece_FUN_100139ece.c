// name: FUN_100139ece
// address: 100139ece

ulong FUN_100139ece(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  iVar2 = *(int *)(param_1 + 0x1a0);
  plVar3 = operator_new(0x30,(nothrow_t *)PTR_nothrow_10082c970);
  if (iVar2 == 0) {
    if (plVar3 != (long *)0x0) {
      FUN_10028bcf2(plVar3,*(undefined8 *)(param_1 + 0x30));
      goto LAB_100139f28;
    }
LAB_100139f40:
    bVar1 = true;
    iVar2 = -0x6c;
    plVar3 = (long *)0x0;
LAB_100139f4a:
    FUN_1001aa38a(local_40,&DAT_1008c4de0,(long)iVar2);
    FUN_1001aaadc(param_4,local_40);
    FUN_1001aaad2(local_40);
    uVar4 = 0;
    if (bVar1) goto LAB_10013a025;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_100139f40;
    FUN_10028bd12(plVar3);
LAB_100139f28:
    iVar2 = FUN_10028bad6(plVar3,param_1 + 0x1a8);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_100139f4a;
    }
    FUN_1001b7b04(local_40,"clientData");
    (**(code **)(*param_3 + 0x10))(param_3,local_40,plVar3 + 1);
    FUN_1001b7a50(local_40);
    FUN_1001b7b04(local_40,"machineId");
    (**(code **)(*param_3 + 0x10))(param_3,local_40,plVar3 + 3);
    FUN_1001b7a50(local_40);
    FUN_1001b7b04(local_40,"dsId");
    FUN_1001bb832(local_50,*(undefined8 *)(param_1 + 0x30));
    FUN_10012a852(param_3,local_40,local_50);
    FUN_1001b7a50(local_50);
    FUN_1001b7a50(local_40);
    uVar4 = CONCAT71((int7)((ulong)param_3 >> 8),1);
  }
  (**(code **)(*plVar3 + 8))(plVar3);
LAB_10013a025:
  return uVar4 & 0xffffffff;
}

