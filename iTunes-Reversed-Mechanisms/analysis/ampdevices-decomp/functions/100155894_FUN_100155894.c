// name: FUN_100155894
// address: 100155894

undefined8 FUN_100155894(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long local_e8 [2];
  long local_d8 [2];
  long local_c8 [2];
  undefined1 local_b8 [16];
  long local_a8 [2];
  undefined1 local_98 [16];
  cfstringStruct *local_88 [2];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  long local_68;
  long local_60 [2];
  undefined1 local_50 [16];
  long local_40;
  long *local_38;
  
  local_68 = param_2;
  FUN_10032f0f2(local_b8);
  FUN_10032f0f2(local_a8);
  FUN_10032f0f2(local_98);
  if (*param_3 == 0) {
    local_88[0] = &cf_rental_bag_response;
    FUN_1001a7b90(local_50);
    FUN_10032f0f2(local_e8);
    FUN_10032f0f2(local_60);
    cVar3 = FUN_1001a92ae(param_4,local_50,local_60);
    plVar5 = local_e8;
    if (cVar3 != '\0') {
      plVar5 = local_60;
    }
    FUN_1001a7a9e(&local_40,plVar5);
    FUN_1001a85d4(local_60);
    FUN_1001a7b1c(local_b8,&local_40);
    FUN_1001a85d4(&local_40);
    FUN_1001a85d4(local_e8);
    FUN_1001ab240(local_50);
    local_88[0] = &cf_device_diversity;
    FUN_1001a7b90(local_50);
    FUN_10032f0f2(local_d8);
    FUN_10032f0f2(local_60);
    cVar3 = FUN_1001a92ae(param_4,local_50,local_60);
    plVar5 = local_d8;
    if (cVar3 != '\0') {
      plVar5 = local_60;
    }
    FUN_1001a7a9e(&local_40,plVar5);
    FUN_1001a85d4(local_60);
    FUN_1001a7b1c(local_a8,&local_40);
    FUN_1001a85d4(&local_40);
    FUN_1001a85d4(local_d8);
    FUN_1001ab240(local_50);
    local_88[0] = &cf_checkin_sar;
    FUN_1001a7b90(local_50);
    FUN_10032f0f2(local_c8);
    FUN_10032f0f2(local_60);
    cVar3 = FUN_1001a92ae(param_4,local_50,local_60);
    plVar5 = local_c8;
    if (cVar3 != '\0') {
      plVar5 = local_60;
    }
    FUN_1001a7a9e(&local_40,plVar5);
    FUN_1001a85d4(local_60);
    FUN_1001a7b1c(local_98,&local_40);
    FUN_1001a85d4(&local_40);
    FUN_1001a85d4(local_c8);
    FUN_1001ab240(local_50);
    if (*(long *)(local_68 + 0x210) != 0) {
      FUN_10032f0f2(local_60);
      iVar4 = FUN_10041649e(*(undefined8 *)(local_68 + 0x210),local_b8,local_98,local_60);
      if (iVar4 != 0) {
        FUN_1001b7b04(&local_40,"Could not import rental bag.");
        FUN_1001b7a44(local_50);
        FUN_1001b7a44(local_88);
        FUN_1001aa318(local_78);
        FUN_1001aaaac(local_70,&DAT_1008c4de0,(long)iVar4,&local_40,local_50,local_88,local_78);
        FUN_1001568e0(param_1,local_b8,local_70);
LAB_100155b70:
        FUN_1001aaad2(local_70);
        FUN_1001aaad2(local_78);
        FUN_1001b7a50(local_88);
        FUN_1001b7a50(local_50);
        FUN_1001b7a50(&local_40);
        FUN_1001a85d4(local_60);
        goto LAB_1001558f2;
      }
      if (local_60[0] != 0) {
        FUN_100135118(&local_40);
        lVar1 = local_40;
        uVar2 = *(undefined8 *)(local_68 + 0x1a8);
        std::mutex::lock();
        if (*(char *)(lVar1 + 0x158) == '\0') {
          *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
        }
        std::mutex::unlock();
        FUN_100155e92(local_40,local_68 + 0x1b0);
        FUN_100155ef2(local_40,local_68 + 0x1c0);
        FUN_100155f52(local_40,*(undefined1 *)(local_68 + 0x220));
        FUN_100155f94(local_40,local_60);
        FUN_10014105c(local_40);
        if (local_38 != (long *)0x0) {
          LOCK();
          plVar5 = local_38 + 1;
          lVar1 = *plVar5;
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      if (local_a8[0] != 0) {
        iVar4 = FUN_100416636(*(undefined8 *)(local_68 + 0x210),local_a8);
        if (iVar4 != 0) {
          FUN_1001b7b04(&local_40,"Could not import rental vault.");
          FUN_1001b7a44(local_50);
          FUN_1001b7a44(local_88);
          FUN_1001aa318(local_78);
          FUN_1001aaaac(local_70,&DAT_1008c4de0,(long)iVar4,&local_40,local_50,local_88,local_78);
          FUN_1001568e0(param_1,local_b8,local_70);
          goto LAB_100155b70;
        }
      }
      FUN_1001a85d4(local_60);
    }
  }
  FUN_10015695c(param_1,local_b8,param_3);
LAB_1001558f2:
  FUN_1001a85d4(local_98);
  FUN_1001a85d4(local_a8);
  FUN_1001a85d4(local_b8);
  return param_1;
}

