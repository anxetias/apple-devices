// name: FUN_1004a9413
// address: 1004a9413

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004a9413(undefined8 *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = FUN_1001c629e(0x1e30,&DAT_100711c6e);
  if (lVar6 == 0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "item != __null";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x6c;
  }
  else {
    *(undefined1 (*) [16])(lVar6 + 0x50) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar6 + 0x70) = (undefined1  [16])0x0;
    FUN_1001b7a44(lVar6 + 0x130);
    *(undefined1 (*) [16])(lVar6 + 0x12c0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar6 + 0x12b0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar6 + 0x12a0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar6 + 0x1290) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar6 + 0x1258) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar6 + 0x1268) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar6 + 0x1278) = (undefined1  [16])0x0;
    *(undefined4 *)(lVar6 + 0x1288) = 0;
    *(undefined1 (*) [16])(lVar6 + 0x150) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar6 + 0x160) = (undefined1  [16])0x0;
    *(undefined8 *)(lVar6 + 0x10) = 0x1646e6974;
    uVar3 = FUN_1001ea5dc();
    *(undefined4 *)(lVar6 + 0x18) = uVar3;
    *(undefined1 *)(lVar6 + 0x69) = 1;
    iVar4 = FUN_1001c666e(lVar6 + 0x40);
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        *(undefined1 *)(lVar6 + 0x68) = 1;
        *(undefined1 *)(lVar6 + 0x210) = 0;
        FUN_1001c62d9(lVar6 + 0x648,0x130);
        *(undefined8 *)(lVar6 + 0x648) = 0x64727468;
        uVar9 = _UNK_10074b9d8;
        *(undefined8 *)(lVar6 + 0x718) = _DAT_10074b9d0;
        *(undefined8 *)(lVar6 + 0x720) = uVar9;
        uVar9 = _UNK_100710a08;
        *(undefined8 *)(lVar6 + 0x728) = _DAT_100710a00;
        *(undefined8 *)(lVar6 + 0x730) = uVar9;
        if (param_1 == (undefined8 *)0x0) {
LAB_1004a96db:
          *(undefined4 *)(lVar6 + 0x7c8) = 0x6c656166;
          *(long *)(lVar6 + 2000) = lVar6;
          *(undefined4 *)(lVar6 + 0x200) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0x204) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0x208) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0x20c) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0x1b60) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0x1b64) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0x1b68) = 0xffffffff;
          *(undefined4 *)(lVar6 + 0x1b6c) = 0xffffffff;
          *(undefined1 *)(lVar6 + 0x1ca) = 1;
          *(undefined8 *)(lVar6 + 0x1b88) = 0x405e000000000000;
          *(undefined8 *)(lVar6 + 0x1bb0) = 0xbff0000000000000;
          FUN_1001c62d9(lVar6 + 0x1bc0,0x270);
          *(long *)(lVar6 + 0x1bc0) = lVar6;
          *(undefined1 *)(lVar6 + 0x1cc0) = 1;
          iVar4 = FUN_1001e9c3e(lVar6 + 0x1288);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              if (param_1 != (undefined8 *)0x0) {
                if (*(int *)(param_1 + 0x8f) != 0x70656e64) {
                  iVar4 = FUN_1004a8990(lVar6,param_1);
                  if (iVar4 != -0x80) {
                    if (iVar4 == 0) goto LAB_1004a9860;
                    uVar9 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar2 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                      goto LAB_1004a97de;
                    }
                  }
                  goto LAB_1004a988a;
                }
                *(undefined4 *)(lVar6 + 0x140) = 0x70656e64;
              }
LAB_1004a9860:
              iVar4 = 0;
              if (*(long *)(lVar6 + 0x1b60) != -1) {
                *(undefined8 *)(lVar6 + 0x200) = *(undefined8 *)(lVar6 + 7000);
                *(long *)(lVar6 + 0x208) = *(long *)(lVar6 + 0x1b60);
                iVar4 = 0;
              }
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar9,0x10);
              if (cVar2 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_1004a97de:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
        }
        else {
          uVar9 = param_1[0x99];
          *(undefined8 *)(lVar6 + 0x80) = param_1[0x98];
          *(undefined8 *)(lVar6 + 0x88) = uVar9;
          FUN_1001c631b(param_1 + 0x9a,lVar6 + 0x90,0x30);
          FUN_1001c631b(param_1 + 0xa0,lVar6 + 0xc0,0x2c);
          *(undefined8 *)(lVar6 + 0x120) = *param_1;
          *(undefined1 *)(lVar6 + 0x128) = *(undefined1 *)(param_1 + 1);
          *(undefined8 *)(lVar6 + 0x144) = param_1[0x8e];
          FUN_100203686(lVar6 + 0x150,param_1 + 0x95);
          *(undefined1 *)(lVar6 + 0x210) = *(undefined1 *)(param_1 + 0x97);
          FUN_1001b8172(lVar6 + 0x130,param_1 + 2);
          if (*(char *)(param_1 + 4) == '\0') goto LAB_1004a96db;
          *(undefined4 *)(lVar6 + 0x780) = 0x636e7472;
          *(undefined1 *)(lVar6 + 0x778) = 1;
          *(long *)(lVar6 + 0x788) = lVar6;
          if (*(int *)(param_1 + 0x8f) == 0x70656e64) {
            *(undefined4 *)(lVar6 + 0x140) = 0x70656e64;
          }
          FUN_1001c2b73(lVar6 + 0x7a8);
          *(undefined4 *)(lVar6 + 0x7a0) = 0;
          iVar4 = 0;
        }
LAB_1004a988a:
        if (DAT_1008c7780 == (long *)0x0) {
          plVar7 = operator_new(0x88,(nothrow_t *)PTR_nothrow_10082c970);
          if (plVar7 != (long *)0x0) {
            *plVar7 = (long)&PTR_FUN_10085d098;
            *(undefined4 *)(plVar7 + 7) = 0;
            *(undefined1 (*) [16])(plVar7 + 8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(plVar7 + 10) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(plVar7 + 0xc) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(plVar7 + 0xe) = (undefined1  [16])0x0;
            *(undefined4 *)(plVar7 + 0x10) = 0;
            FUN_1001c62d9(plVar7 + 1,0x30);
            FUN_1001c62d9(plVar7 + 7,0x48);
          }
          plVar8 = operator_new(0x20);
          *(undefined1 (*) [16])(plVar8 + 1) = (undefined1  [16])0x0;
          *plVar8 = (long)&PTR_FUN_10085d1a8;
          plVar8[3] = (long)plVar7;
          local_68._8_8_ = plVar8;
          local_68._0_8_ = plVar7;
          if (plVar7 == (long *)0x0) {
            uVar9 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar9,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "obj != nullptr";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            iVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,0);
            if (iVar5 == -0x80) {
LAB_1004a9972:
              plVar7 = plVar8 + 1;
              local_68 = (undefined1  [16])0x0;
              LOCK();
              lVar1 = *plVar7;
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (lVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                std::__shared_weak_count::__release_weak();
              }
            }
            else if (iVar5 != 0) {
              uVar9 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar9,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              if (iVar5 != 0) goto LAB_1004a9972;
            }
          }
          FUN_100217418(&DAT_1008c7780,local_68);
          if ((long *)local_68._8_8_ != (long *)0x0) {
            LOCK();
            plVar7 = (long *)(local_68._8_8_ + 8);
            lVar1 = *plVar7;
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (lVar1 == 0) {
              (**(code **)(*(long *)local_68._8_8_ + 0x10))(local_68._8_8_);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (DAT_1008c7780 != (long *)0x0) goto LAB_1004a9a1b;
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "sDownloadItemList != __null";
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
LAB_1004a9a1b:
          (**(code **)(*DAT_1008c7780 + 0x10))(DAT_1008c7780,lVar6);
        }
        *param_2 = lVar6;
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (iVar4 == 0) {
        iVar4 = 0;
        goto LAB_1004a9a3b;
      }
    }
  }
  FUN_1004a9c2f(lVar6);
  *param_2 = 0;
LAB_1004a9a3b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

