// name: FUN_100139346
// address: 100139346

ulong FUN_100139346(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  int local_48 [2];
  undefined1 local_40 [16];
  
  FUN_1001b7b04(local_48,"machineName");
  uVar3 = FUN_1001eb51b();
  FUN_1001aaedc(local_58,uVar3);
  FUN_100133c14(param_3,local_48,local_58);
  FUN_1001ab006(local_58);
  FUN_1001b7a50(local_48);
  if (*(int *)(param_1 + 0x1a0) == 0) {
    pvVar4 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar4 != (void *)0x0) {
      FUN_10028b332(pvVar4,*(undefined8 *)(param_1 + 0x30));
    }
    plVar1 = *(long **)(param_1 + 0x1a8);
    *(void **)(param_1 + 0x1a8) = pvVar4;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pvVar4 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar4 != (void *)0x0) {
      FUN_10041581c(pvVar4);
    }
    FUN_100134af8(param_1 + 0x1b0,pvVar4);
  }
  else if (*(int *)(param_1 + 0x1a0) == 1) {
    pvVar4 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar4 != (void *)0x0) {
      FUN_10028b424(pvVar4);
    }
    plVar1 = *(long **)(param_1 + 0x1a8);
    *(void **)(param_1 + 0x1a8) = pvVar4;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if (*(long *)(param_1 + 0x1a8) == 0) {
    iVar2 = -0x6c;
LAB_10013950a:
    FUN_1001aa38a(local_48,&DAT_1008c4de0,(long)iVar2);
    FUN_1001aaadc(param_4,local_48);
LAB_10013952b:
    FUN_1001aaad2(local_48);
  }
  else {
    iVar2 = FUN_10028b042(*(long *)(param_1 + 0x1a8),param_1 + 0x1b8);
    if (iVar2 != 0) goto LAB_10013950a;
    FUN_1001b7b04(local_48,"clientData");
    (**(code **)(*param_3 + 0x10))(param_3,local_48,*(long *)(param_1 + 0x1a8) + 0x10);
    FUN_1001b7a50(local_48);
    uVar6 = CONCAT71((int7)((ulong)local_48 >> 8),1);
    if (*(int *)(param_1 + 0x1a0) != 0) goto LAB_100139537;
    uVar3 = *(undefined8 *)(param_1 + 0x1b0);
    uVar5 = FUN_10041520b();
    iVar2 = FUN_100415834(uVar3,uVar5,0);
    if (iVar2 != 0) {
      FUN_1001aa38a(local_48,&DAT_1008c4de0,(long)iVar2);
      FUN_1001aaadc(param_4,local_48);
      goto LAB_10013952b;
    }
    FUN_10032f0f2(local_58);
    FUN_10012d389(local_48,*(undefined8 *)(param_1 + 0x1b0),1,*(undefined8 *)(param_1 + 0x30));
    FUN_1001a7b1c(local_58,local_40);
    FUN_1001a85d4(local_40);
    if (local_48[0] == 0) {
      FUN_10012d36a(local_48);
      FUN_1001a7b90(local_60,local_58);
      (**(code **)(*param_3 + 0x18))(param_3,local_48,local_60);
      FUN_1001ab240(local_60);
      FUN_1001b7a50(local_48);
      FUN_1001a85d4(local_58);
      goto LAB_100139537;
    }
    FUN_1001aa38a(local_48,&DAT_1008c4de0,(long)local_48[0]);
    FUN_1001aaadc(param_4,local_48);
    FUN_1001aaad2(local_48);
    FUN_1001a85d4(local_58);
  }
  uVar6 = 0;
LAB_100139537:
  return uVar6 & 0xffffffff;
}

