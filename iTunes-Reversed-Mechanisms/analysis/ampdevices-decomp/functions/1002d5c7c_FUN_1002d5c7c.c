// name: FUN_1002d5c7c
// address: 1002d5c7c

void FUN_1002d5c7c(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 local_70;
  long local_68;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar9 = DAT_1008c75b8;
  cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar4 != '\0') {
    local_58 = 0;
    __os_log_impl(0x100000000,uVar9,1,"",&local_58,2);
  }
  uVar9 = FUN_10039a28c();
  cVar4 = FUN_1002d6e80(uVar9,1);
  puVar2 = DAT_1008c5d80;
  if (cVar4 == '\0') {
    for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (((((*(int *)((long)puVar2 + 0xc) == 2) || (*(char *)(puVar2 + 2) == '\0')) &&
           (*(char *)((long)puVar2 + 0x11) != '\0')) || (*(char *)((long)puVar2 + 0x44) != '\0')) ||
         (((*(int *)(puVar2 + 8) + 0x725fffdU < 6 &&
           ((0x29U >> (*(int *)(puVar2 + 8) + 0x725fffdU & 0x1f) & 1) != 0)) ||
          ((*(int *)((long)puVar2 + 0x14) == 1 && (*(char *)((long)puVar2 + 0x12) != '\0')))))) {
LAB_1002d5d4b:
        *(undefined4 *)((long)puVar2 + 0x14) = 0;
      }
      else {
        cVar4 = *(char *)((long)puVar2 + 0x11);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 == '\0') {
          if (cVar5 != '\0') {
            pcVar10 = "detected unmountable iPod; device does NOT have filesystem";
            goto LAB_1002d5dd8;
          }
        }
        else if (cVar5 != '\0') {
          pcVar10 = "detected unmountable iPod; device peeked but not mounted";
LAB_1002d5dd8:
          local_58 = 0;
          __os_log_impl(0x100000000,uVar9,1,pcVar10,&local_58,2);
        }
        if ((*(char *)((long)puVar2 + 0x11) == '\0') || (puVar2[7] == 0)) {
          local_68 = FUN_100263880(puVar2[5]);
          if (local_68 == 0) {
            local_68 = 0;
            iVar6 = FUN_100634ebc(puVar2[5]);
            if (iVar6 != 0) {
              iVar7 = FUN_1006351db(iVar6,"IOSCSIPeripheralDeviceNub");
              if (iVar7 == 0) {
                _IOObjectRelease(iVar6);
              }
              else {
                cVar4 = FUN_100633eda(iVar7,&local_58,&local_70,&local_5a);
                if (cVar4 == '\0') {
                  _IOObjectRelease(iVar7);
                  _IOObjectRelease(iVar6);
                }
                else {
                  iVar8 = FUN_1002d6afb(CONCAT44(uStack_54,CONCAT22(uStack_56,local_58)),local_70,
                                        local_5a,0x69506f64,&local_68);
                  if (iVar8 == 0) {
                    *(undefined1 *)(local_68 + 0x3c) = 0;
                    uVar1 = *DAT_1008c5d70;
                    *(undefined1 *)(local_68 + 0x39) = uVar1;
                    *(undefined1 *)(local_68 + 0x6d64) = uVar1;
                    _IOObjectRelease(iVar7);
                    _IOObjectRelease(iVar6);
                    goto LAB_1002d5fdc;
                  }
                  _IOObjectRelease(iVar7);
                  _IOObjectRelease(iVar6);
                  if (iVar8 != -0x23) goto LAB_1002d5ffd;
                }
                FUN_1002635a2(puVar2[5],puVar2[5],&local_68);
              }
            }
          }
          else if (*(char *)(local_68 + 0x6d62) == '\0') {
            if (*(char *)(local_68 + 0x6d61) != '\0') {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x202;
                uStack_56 = 0x822;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x822;
                local_4a = "iPodDevice->hasEverMounted == false";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              if (*(char *)(local_68 + 0x6d61) != '\0') goto LAB_1002d5ffd;
            }
LAB_1002d5fdc:
            lVar3 = local_68;
            *(undefined1 *)(local_68 + 28000) = 1;
            FUN_10026473a(local_68,0x72617761,0,0);
            FUN_100264854(lVar3);
          }
          else {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x202;
              uStack_56 = 0x822;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "iPodDevice->hasNotBeenInitializedYet == false";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
LAB_1002d5ffd:
          *(undefined1 *)((long)puVar2 + 0x44) = 1;
          goto LAB_1002d5d4b;
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          local_58 = 0;
          __os_log_impl(0x100000000,uVar9,1,"detected unmountable iPod; attempting mount.",&local_58
                        ,2);
        }
        _DADiskMount(puVar2[7],0,0,FUN_1002d7459,0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

