// name: FUN_100154f30
// address: 100154f30

ulong FUN_100154f30(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  bool bVar9;
  long local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  long local_90;
  undefined1 local_88 [16];
  long local_78 [2];
  undefined1 local_68 [16];
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  
  local_98 = param_4;
  FUN_1001b7b04(&local_58,"rental-id");
  local_78[0] = param_1[0x35];
  FUN_10014f7ae(local_68,local_78,0);
  FUN_1001a7bac(local_40,local_68);
  (**(code **)(*param_3 + 0x18))(param_3,&local_58,local_40);
  FUN_1001ab240(local_40);
  FUN_1001aae6c(local_68);
  FUN_1001b7a50(&local_58);
  FUN_1001b7b04(&local_58,"dsid");
  FUN_100134a82(local_68,param_1 + 6,0);
  FUN_1001a7bac(local_40,local_68);
  (**(code **)(*param_3 + 0x18))(param_3,&local_58,local_40);
  FUN_1001ab240(local_40);
  FUN_1001aae6c(local_68);
  FUN_1001b7a50(&local_58);
  plVar7 = param_1 + 0x38;
  cVar2 = FUN_1001b8428(plVar7);
  if ((cVar2 == '\0') && (param_1[0x3a] != 0)) {
    FUN_1001b7b04(&local_58,"guid");
    FUN_100133b90(param_3,&local_58,plVar7);
    FUN_1001b7a50(&local_58);
    FUN_1001b7b04(&local_58,"rbsync");
    FUN_1001a7b90(local_40,param_1 + 0x3a);
    (**(code **)(*param_3 + 0x18))(param_3,&local_58,local_40);
    FUN_1001ab240(local_40);
    FUN_1001b7a50(&local_58);
    if (param_1[0x3e] == 0) {
      if (param_1[0x3c] != 0) {
        FUN_1001b7b04(&local_58,"rental-bag");
        FUN_1001a7b90(local_40,param_1 + 0x3c);
        (**(code **)(*param_3 + 0x18))(param_3,&local_58,local_40);
        goto LAB_1001553b5;
      }
    }
    else {
      FUN_1001b7b04(&local_58,"rental-bag-response");
      FUN_1001a7b90(local_40,param_1 + 0x3e);
      (**(code **)(*param_3 + 0x18))(param_3,&local_58,local_40);
LAB_1001553b5:
      FUN_1001ab240(local_40);
      FUN_1001b7a50(&local_58);
    }
    plVar7 = param_1 + 0x40;
    lVar6 = FUN_1001a7bfa(plVar7);
    if (lVar6 != 0) {
      FUN_1001b7b04(&local_58,"device-diversity");
      FUN_1001a7b90(local_40,plVar7);
      (**(code **)(*param_3 + 0x18))(param_3,&local_58,local_40);
      FUN_1001ab240(local_40);
      FUN_1001b7a50(&local_58);
    }
  }
  else {
    pvVar5 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar5 != (void *)0x0) {
      FUN_10041581c(pvVar5);
    }
    plVar1 = param_1 + 0x42;
    FUN_100134af8(plVar1,pvVar5);
    if (*plVar1 == 0) {
      FUN_1001b7b04(&local_58,"Could not create AuthDBFPContext.");
      FUN_1001b7a44(local_40);
      FUN_1001b7a44(local_68);
      FUN_1001aa318(local_88);
      FUN_1001aaaac(local_78,&DAT_1008c4de0,0xffffffffffffff94,&local_58,local_40,local_68,local_88)
      ;
      FUN_1001aaadc(local_98,local_78);
LAB_100155204:
      FUN_1001aaad2(local_78);
      FUN_1001aaad2(local_88);
      FUN_1001b7a50(local_68);
      FUN_1001b7a50(local_40);
      FUN_1001b7a50(&local_58);
LAB_100155231:
      uVar8 = 0;
      goto LAB_100155679;
    }
    iVar3 = FUN_100415834(*plVar1,param_1[0x43],0);
    if (iVar3 != 0) {
      FUN_1001b7b04(&local_58,"Could not open AuthDBFPContext.");
      FUN_1001b7a44(local_40);
      FUN_1001b7a44(local_68);
      FUN_1001aa318(local_88);
      FUN_1001aaaac(local_78,&DAT_1008c4de0,(long)iVar3,&local_58,local_40,local_68,local_88);
      FUN_1001aaadc(local_98,local_78);
      goto LAB_100155204;
    }
    FUN_10032f174(&local_58);
    FUN_1001b80b2(plVar7,&local_58);
    FUN_1001b7a50(&local_58);
    FUN_1001b7b04(&local_58,"guid");
    FUN_100133b90(param_3,&local_58,plVar7);
    FUN_1001b7a50(&local_58);
    FUN_10032f0f2(local_40);
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = 0;
    plVar7 = (long *)param_1[0x42];
    uVar4 = (**(code **)(*param_1 + 0x158))(param_1);
    iVar3 = FUN_100415d8c(plVar7,uVar4,param_1[0x35],0x78,local_40,&local_58);
    if (iVar3 == 0) {
      FUN_1001b7b04(local_68,"rbsync");
      FUN_1001a7b90(local_78,local_40);
      (**(code **)(*param_3 + 0x18))(param_3,local_68,local_78);
      FUN_1001ab240(local_78);
      FUN_1001b7a50(local_68);
      if (local_58 != pvStack_50) {
        FUN_1001545b6(local_68,local_58,pvStack_50,0);
        FUN_1001b7b04(local_78,"device-diversity");
        FUN_1001a7b90(local_88,local_68);
        (**(code **)(*param_3 + 0x18))(param_3,local_78,local_88);
        FUN_1001ab240(local_88);
        FUN_1001b7a50(local_78);
        FUN_1001a7a94(local_68);
      }
      FUN_10032f0f2(local_68);
      iVar3 = FUN_1004160cc(*plVar1,local_68);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        FUN_1001b7b04(local_78,"rental-bag");
        FUN_1001a7b90(local_88,local_68);
        (**(code **)(*param_3 + 0x18))(param_3,local_78,local_88);
        FUN_1001ab240(local_88);
      }
      else {
        FUN_1001b7b04(local_78,"Could not export rental bag.");
        FUN_1001b7a44(local_88);
        FUN_1001b7a44(local_a8);
        plVar7 = &local_b0;
        FUN_1001aa318(plVar7);
        FUN_1001aaaac(&local_90,&DAT_1008c4de0,(long)iVar3,local_78,local_88,local_a8,plVar7);
        FUN_1001aaadc(local_98,&local_90);
        FUN_1001aaad2(&local_90);
        FUN_1001aaad2(&local_b0);
        FUN_1001b7a50(local_a8);
        FUN_1001b7a50(local_88);
      }
      FUN_1001b7a50(local_78);
      FUN_1001a85d4(local_68);
    }
    else {
      FUN_1001b7b04(local_68,"Could not generate rental bag request.");
      FUN_1001b7a44(local_78);
      FUN_1001b7a44(local_88);
      plVar7 = &local_90;
      FUN_1001aa318(plVar7);
      FUN_1001aaaac(local_a8,&DAT_1008c4de0,(long)iVar3,local_68,local_78,local_88,plVar7);
      FUN_1001aaadc(local_98,local_a8);
      FUN_1001aaad2(local_a8);
      FUN_1001aaad2(&local_90);
      FUN_1001b7a50(local_88);
      FUN_1001b7a50(local_78);
      FUN_1001b7a50(local_68);
      bVar9 = false;
    }
    if (local_58 != (void *)0x0) {
      pvStack_50 = local_58;
      operator_delete(local_58);
    }
    FUN_1001a85d4(local_40);
    if (!bVar9) goto LAB_100155231;
  }
  if ((char)param_1[0x44] == '\x01') {
    FUN_1001b7b04(&local_58,"desktop-guid");
    FUN_10032f174(local_40);
    FUN_10012a852(param_3,&local_58,local_40);
    FUN_1001b7a50(local_40);
    FUN_1001b7a50(&local_58);
  }
  cVar2 = FUN_1001b8428(param_1 + 0x36);
  uVar8 = CONCAT71((int7)((ulong)plVar7 >> 8),1);
  if (cVar2 == '\0') {
    FUN_1001b7b04(&local_58,"hw.model");
    FUN_100133b90(param_3,&local_58,param_1 + 0x36);
    FUN_1001b7a50(&local_58);
  }
LAB_100155679:
  return uVar8 & 0xffffffff;
}

