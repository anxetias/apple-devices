// name: FUN_100600e92
// address: 100600e92

void FUN_100600e92(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong local_98 [2];
  long local_88 [2];
  undefined1 local_78 [16];
  long local_68;
  long *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = *(long *)(param_1 + 0x10);
  cVar4 = FUN_1001ab24a(param_2);
  if (cVar4 == '\0') goto LAB_1006011a7;
  FUN_1001ab042(&local_58,param_2);
  FUN_1001b7f2a(local_78,&local_58);
  FUN_1001ab006(&local_58);
  FUN_1001b7b04(&local_58,"media-domain:");
  cVar4 = FUN_1001ba114(local_78,&local_58,0x1b1);
  FUN_1001b7a50(&local_58);
  if (cVar4 != '\0') {
    FUN_1001b7b04(&local_68,"media-domain:");
    FUN_1001b7b04(local_88,"");
    FUN_1001ba564(&local_58,local_78,&local_68,local_88);
    local_98[0] = 0;
    FUN_1001bb856(&local_58);
    uVar3 = local_98[0];
    bVar2 = (byte)local_98[0];
    FUN_1001b7a50(&local_58);
    FUN_1001b7a50(local_88);
    FUN_1001b7a50(&local_68);
    if ((bVar2 < 9) && ((0x116U >> (bVar2 & 0x1f) & 1) != 0)) {
      FUN_1001b7a50(local_78);
      if ((**(byte **)(param_1 + 8) & bVar2) != 0) goto LAB_1006011a7;
      cVar4 = FUN_1001ab2fa(param_3);
      if ((cVar4 == '\0') ||
         (**(byte **)(param_1 + 8) = **(byte **)(param_1 + 8) | bVar2,
         (*(byte *)(lVar7 + 0x34) & bVar2) == 0)) goto LAB_1006011a7;
      FUN_1001a8fb6(local_78,param_3);
      FUN_10049fff2(&local_68,local_78);
      if (local_68 == 0) {
        uVar5 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar5,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "unpacker != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        if (local_68 != 0) goto LAB_100601037;
      }
      else {
LAB_100601037:
        uVar8 = uVar3 & 0xff;
        lVar6 = FUN_1002796f8(uVar8,1);
        if (lVar6 == 0) {
          uVar5 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar5,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x822;
            local_4a = "libraryPrefs != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (*(char *)(local_68 + 0x170) == '\0') {
          FUN_1004a0240(local_68);
        }
        if (lVar6 != 0) {
          FUN_10049f54a(local_68 + 0x28,2,lVar6);
          FUN_1004db798(&local_58,*(undefined8 *)(lVar7 + 0xf0),1);
          if (CONCAT44(uStack_54,local_58) != 0) {
            local_88[0] = 0;
            local_88[1] = 0;
            FUN_10057e1d8(local_98,CONCAT44(uStack_54,local_58),1);
            FUN_100217418(local_88,local_98);
            FUN_100205d70(local_98);
            if (local_88[0] != 0) {
              FUN_1002bbfbc(local_88[0],uVar3 & 0xff,lVar6);
            }
            FUN_100205d70(local_88);
          }
          if (*(long *)(lVar6 + 0x10) != 0) {
            lVar7 = FUN_100308295(*(undefined8 *)(lVar7 + 0xa0),uVar8);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
            }
          }
          FUN_100205d70(&local_58);
        }
      }
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001a8fac(local_78);
      goto LAB_1006011a7;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "IsDiscreteMediaDomain(mediaDomain)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001b7a50(local_78);
LAB_1006011a7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

