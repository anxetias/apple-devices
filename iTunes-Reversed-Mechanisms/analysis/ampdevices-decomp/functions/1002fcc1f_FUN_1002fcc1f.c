// name: FUN_1002fcc1f
// address: 1002fcc1f

bool FUN_1002fcc1f(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 local_4e8;
  char *local_4e4;
  undefined2 local_4dc;
  int local_4da;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined2 uStack_4bc;
  undefined2 uStack_4ba;
  undefined2 uStack_4b8;
  undefined6 uStack_4b6;
  undefined8 uStack_4b0;
  undefined1 *local_498;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined1 local_438 [512];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x10) == 0)) {
LAB_1002fd766:
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_22a = "TrackDataIsValid(sourceTrackData)";
LAB_1002fd7ec:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 8);
    if (*(int *)(*(long *)(lVar1 + 0x10) + 0x80) != 0x74646174) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1002fd766;
    }
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
      if (*(int *)(*(long *)(lVar2 + 0x10) + 0x80) != 0x74646174) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure (expected to be true)";
          local_22c = 0x822;
          local_22a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        cVar3 = FUN_1001782e9(0,1);
        if (cVar3 == '\0') goto LAB_1002fd7ac;
      }
      FUN_100476928(lVar1,&local_238);
      FUN_100476928(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_100471097(lVar2,&local_238,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,2);
      }
      FUN_1004779ac(lVar1,&local_238);
      FUN_1004779ac(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_1004711f9(lVar2,&local_238,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,4);
      }
      FUN_1004772c4(lVar1,&local_238);
      FUN_1004772c4(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_1004714e5(lVar2,&local_238,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,3);
      }
      FUN_100478022(lVar1,&local_238);
      FUN_100478022(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_10047136f(lVar2,&local_238,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0x47);
      }
      FUN_100478a09(lVar1,&local_238);
      FUN_100478a09(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_100478cfc(lVar2,&local_238);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0x27);
      }
      FUN_100478ed2(lVar1,&local_238);
      FUN_100478ed2(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_1004791c7(lVar2,&local_238);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0x9f);
      }
      FUN_1004793b3(lVar1,&local_238);
      FUN_1004793b3(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_1004799bf(lVar2,&local_238);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0xa0);
      }
      FUN_10047a0d2(lVar1,&local_238);
      FUN_10047a0d2(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_100471bc2(lVar2,&local_238,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0x12);
      }
      FUN_10047a7b5(lVar1,&local_238);
      FUN_10047a7b5(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_10047aaa8(lVar2,&local_238,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,8);
      }
      FUN_10047b65a(lVar1,&local_238);
      FUN_10047b65a(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_1004717a2(lVar2,&local_238);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0xe);
      }
      FUN_10047b9ad(lVar1,&local_238);
      FUN_10047b9ad(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_1004718e9(lVar2,&local_238);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0x7c);
      }
      FUN_10047ced8(lVar1,&local_238);
      FUN_10047ced8(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_10047165b(lVar2,&local_238);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0x37);
      }
      FUN_10047dc87(lVar1,&local_238);
      FUN_10047dc87(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_1004722b7(lVar2,&local_238,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0x3e);
      }
      FUN_10047e42d(lVar1,&local_238);
      FUN_10047e42d(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_10047242b(lVar2,&local_238,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0xbc);
      }
      FUN_10047e782(lVar1,&local_238);
      FUN_10047e782(lVar2,local_438);
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar4 = FUN_100471e81(lVar2,&local_238);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar4;
            uStack_4b8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0x40);
      }
      FUN_10047ea77(lVar1,&local_238);
      FUN_10047ea77(lVar2,local_438);
      iVar4 = 0;
      cVar3 = FUN_1001e3edc(&local_238,local_438,0);
      if (cVar3 == '\0') {
        iVar5 = FUN_10047215a(lVar2,&local_238);
        if ((iVar5 != -0x80) && (iVar5 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x400;
            uStack_4ba = (undefined2)iVar5;
            uStack_4b8 = (undefined2)((uint)iVar5 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
          }
        }
        FUN_1005389ba(param_3,0xa8);
      }
      do {
        iVar5 = FUN_1002fb8c8(lVar1,iVar4,&local_238);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            iVar5 = FUN_1002fb8c8(lVar2,iVar4,local_438);
            if (iVar5 != -0x80) {
              if (iVar5 == 0) {
                cVar3 = FUN_1001e3edc(&local_238,local_438,0);
                if (cVar3 == '\0') {
                  local_450 = 0;
                  uStack_448 = 0;
                  local_460 = 0;
                  uStack_458 = 0;
                  local_470 = 0;
                  uStack_468 = 0;
                  iVar5 = FUN_1002fa385(lVar1,iVar4,&local_4c8);
                  if (iVar5 == 0) {
                    iVar5 = FUN_1002fb52e(lVar2,iVar4,&local_238,*local_498);
                    if (iVar5 != -0x80) {
                      if (iVar5 != 0) {
                        uVar7 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(uVar7,0x10);
                        goto joined_r0x0001002fd721;
                      }
                      FUN_1005389ba(param_3,uStack_4c0);
                    }
                  }
                  else {
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
joined_r0x0001002fd721:
                    if (cVar3 != '\0') {
                      local_4dc = 0x400;
                      local_4e4 = "Assertion failure";
                      local_4e8 = 0x8220202;
                      puVar12 = &local_4e8;
                      local_4da = iVar5;
                      goto LAB_1002fd6b1;
                    }
                  }
                }
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  uStack_4ba = (undefined2)iVar5;
                  uStack_4b8 = (undefined2)((uint)iVar5 >> 0x10);
                  goto LAB_1002fd6aa;
                }
              }
            }
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              uStack_4ba = (undefined2)iVar5;
              uStack_4b8 = (undefined2)((uint)iVar5 >> 0x10);
LAB_1002fd6aa:
              uStack_4bc = 0x400;
              uStack_4c0 = 1;
              uStack_4c4 = 0x7a0a90;
              local_4c8 = 0x8220202;
              puVar12 = &local_4c8;
LAB_1002fd6b1:
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar12,0x12);
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 6);
      if (*(short *)(lVar2 + 0x142) != *(short *)(lVar1 + 0x142)) {
        *(short *)(lVar2 + 0x142) = *(short *)(lVar1 + 0x142);
        uStack_4b8 = 0;
        uStack_4b6 = 0;
        uStack_4b0 = 0;
        local_4c8 = 0;
        uStack_4c4 = 0;
        uStack_4c0 = 0;
        uStack_4bc = 0;
        uStack_4ba = 0;
        FUN_1005389ba(&local_4c8,7);
        FUN_1004755ef(lVar2,0,&local_4c8);
        FUN_1005389ba(param_3,7);
      }
      if (*(short *)(lVar2 + 0x136) != *(short *)(lVar1 + 0x136)) {
        *(short *)(lVar2 + 0x136) = *(short *)(lVar1 + 0x136);
        FUN_1005389ba(param_3,0xb);
      }
      if (*(short *)(lVar2 + 0x138) != *(short *)(lVar1 + 0x138)) {
        *(short *)(lVar2 + 0x138) = *(short *)(lVar1 + 0x138);
        FUN_1005389ba(param_3,0x34);
      }
      if (*(short *)(lVar2 + 0x13a) != *(short *)(lVar1 + 0x13a)) {
        *(short *)(lVar2 + 0x13a) = *(short *)(lVar1 + 0x13a);
        FUN_1005389ba(param_3,0x18);
      }
      if (*(short *)(lVar2 + 0x13c) != *(short *)(lVar1 + 0x13c)) {
        *(short *)(lVar2 + 0x13c) = *(short *)(lVar1 + 0x13c);
        FUN_1005389ba(param_3,0x31);
      }
      lVar8 = *(long *)(lVar2 + 0x70);
      lVar10 = *(long *)(lVar1 + 0x70);
      if (*(short *)(lVar8 + 0x10) != *(short *)(lVar10 + 0x10)) {
        FUN_100471a46(lVar2);
        *(undefined2 *)(*(long *)(lVar2 + 0x70) + 0x10) =
             *(undefined2 *)(*(long *)(lVar1 + 0x70) + 0x10);
        FUN_1005389ba(param_3,0xa1);
        lVar8 = *(long *)(lVar2 + 0x70);
        lVar10 = *(long *)(lVar1 + 0x70);
      }
      if (*(short *)(lVar8 + 0x12) != *(short *)(lVar10 + 0x12)) {
        FUN_100471a46(lVar2);
        *(undefined2 *)(*(long *)(lVar2 + 0x70) + 0x12) =
             *(undefined2 *)(*(long *)(lVar1 + 0x70) + 0x12);
        FUN_1005389ba(param_3,0xa2);
      }
      if (*(short *)(lVar2 + 0x15c) != *(short *)(lVar1 + 0x15c)) {
        *(short *)(lVar2 + 0x15c) = *(short *)(lVar1 + 0x15c);
        FUN_1005389ba(param_3,0x23);
      }
      uVar6 = *(uint *)(lVar2 + 0xc2);
      uVar9 = *(uint *)(lVar1 + 0xc2);
      uVar11 = uVar9 >> 10 & 1;
      if ((uVar6 >> 10 & 1) != uVar11) {
        *(uint *)(lVar2 + 0xc2) = uVar6 & 0xfffffbff | uVar11 << 10;
        FUN_1005389ba(param_3,0x1f);
        uVar6 = *(uint *)(lVar2 + 0xc2);
        uVar9 = *(uint *)(lVar1 + 0xc2);
      }
      uVar9 = uVar9 >> 0x11 & 1;
      if ((uVar6 >> 0x11 & 1) != uVar9) {
        *(uint *)(lVar2 + 0xc2) = uVar6 & 0xfffdffff | uVar9 << 0x11;
        FUN_1005389ba(param_3,0x46);
      }
      if ((*(int *)(param_2 + 0x7c) != *(int *)(param_1 + 0x7c)) &&
         (lVar8 = FUN_1002b646f(), lVar8 != 0)) {
        iVar4 = FUN_1002b667e(param_2,lVar8,0);
        if (iVar4 == 0) {
          FUN_1005389ba(param_3,0x71);
        }
        FUN_10017060f(lVar8);
      }
      if (((*(ushort *)(lVar1 + 0xc6) ^ *(ushort *)(lVar2 + 0xc6)) >> 0xb & 1) != 0) {
        *(ushort *)(lVar2 + 0xc6) =
             *(ushort *)(lVar2 + 0xc6) & 0xf7ff | *(ushort *)(lVar1 + 0xc6) & 0x800;
        FUN_1005389ba(param_3,0x9e);
      }
      lVar8 = *(long *)(lVar2 + 0x78);
      lVar10 = *(long *)(lVar1 + 0x78);
      if (*(int *)(lVar8 + 0xc) != *(int *)(lVar10 + 0xc)) {
        FUN_100471fde(lVar2);
        *(undefined4 *)(*(long *)(lVar2 + 0x78) + 0xc) =
             *(undefined4 *)(*(long *)(lVar1 + 0x78) + 0xc);
        FUN_1005389ba(param_3,0x3f);
        lVar8 = *(long *)(lVar2 + 0x78);
        lVar10 = *(long *)(lVar1 + 0x78);
      }
      if (*(int *)(lVar8 + 4) == *(int *)(lVar10 + 4)) {
        if ((*(float *)(lVar8 + 8) != *(float *)(lVar10 + 8)) ||
           (NAN(*(float *)(lVar8 + 8)) || NAN(*(float *)(lVar10 + 8)))) goto LAB_1002fdb46;
      }
      else {
LAB_1002fdb46:
        FUN_100471fde(lVar2);
        lVar8 = *(long *)(lVar1 + 0x78);
        lVar10 = *(long *)(lVar2 + 0x78);
        *(undefined4 *)(lVar10 + 4) = *(undefined4 *)(lVar8 + 4);
        *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(lVar8 + 8);
        FUN_1005389ba(param_3,0x41);
        lVar8 = *(long *)(lVar2 + 0x78);
        lVar10 = *(long *)(lVar1 + 0x78);
      }
      if (*(char *)(lVar8 + 0x20) != *(char *)(lVar10 + 0x20)) {
        FUN_100471fde(lVar2);
        *(undefined1 *)(*(long *)(lVar2 + 0x78) + 0x20) =
             *(undefined1 *)(*(long *)(lVar1 + 0x78) + 0x20);
        FUN_1005389ba(param_3,0xa5);
        lVar8 = *(long *)(lVar2 + 0x78);
        lVar10 = *(long *)(lVar1 + 0x78);
      }
      if (*(char *)(lVar8 + 0x21) != *(char *)(lVar10 + 0x21)) {
        FUN_100471fde(lVar2);
        *(undefined1 *)(*(long *)(lVar2 + 0x78) + 0x21) =
             *(undefined1 *)(*(long *)(lVar1 + 0x78) + 0x21);
        FUN_1005389ba(param_3,0xa6);
        lVar8 = *(long *)(lVar2 + 0x78);
        lVar10 = *(long *)(lVar1 + 0x78);
      }
      if (*(char *)(lVar8 + 0x22) != *(char *)(lVar10 + 0x22)) {
        FUN_100471fde(lVar2);
        *(undefined1 *)(*(long *)(lVar2 + 0x78) + 0x22) =
             *(undefined1 *)(*(long *)(lVar1 + 0x78) + 0x22);
        FUN_1005389ba(param_3,0xa7);
      }
      cVar3 = FUN_100539270(param_3);
      bVar13 = cVar3 != '\0';
      goto LAB_1002fd81c;
    }
LAB_1002fd7ac:
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_22a = "TrackDataIsValid(destTrackData)";
      goto LAB_1002fd7ec;
    }
  }
  bVar13 = false;
  FUN_1001782e9(0,0);
LAB_1002fd81c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar13;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

