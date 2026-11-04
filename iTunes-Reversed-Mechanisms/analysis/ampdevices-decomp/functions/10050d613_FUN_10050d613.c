// name: FUN_10050d613
// address: 10050d613

int FUN_10050d613(long param_1,void *param_2,char param_3)

{
  void *pvVar1;
  void *pvVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  uint uVar10;
  uint local_b28;
  undefined8 local_b24;
  undefined1 local_b18 [1056];
  undefined1 local_6f8 [512];
  undefined4 local_4f8;
  char *local_4f4;
  undefined2 local_4ec;
  char *local_4ea;
  short local_d8;
  short local_d6;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_10017cbd0(param_2);
  if (cVar3 == '\0') {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_4f8 = 0x8220202;
      local_4f4 = "Assertion failure";
      local_4ec = 0x822;
      local_4ea = "JRFileSpecIsValid(volumeSpec)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_4f8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  pvVar1 = (void *)(param_1 + 0x6b40);
  cVar3 = FUN_10017cbd0(pvVar1);
  if (cVar3 != '\0') {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_4f8 = 0x8220202;
      local_4f4 = "Assertion failure";
      local_4ec = 0x822;
      local_4ea = "JRFileSpecIsValid(&handlerData->volumeSpec) == false";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_4f8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  cVar3 = FUN_10017ec13(pvVar1,param_2);
  iVar5 = 0;
  if ((cVar3 != '\0') ||
     (iVar5 = FUN_100183add(param_2,&local_4f8,param_1 + 0x6f64), iVar5 == -0x80))
  goto LAB_10050d6c6;
  if (iVar5 != 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    if (iVar5 != 0) goto LAB_10050d6c6;
  }
  _memcpy(pvVar1,&local_4f8,0x420);
  *(undefined4 *)(param_1 + 0x153a0) = local_90;
  *(undefined4 *)(param_1 + 0x153a4) = uStack_8c;
  *(undefined4 *)(param_1 + 0x153a8) = uStack_88;
  *(undefined4 *)(param_1 + 0x153ac) = uStack_84;
  *(int *)(param_1 + 0x6f60) = local_80;
  if (local_d8 == 0x4953) {
    uVar9 = 2;
    if (local_d6 != 0x4244) goto LAB_10050d793;
  }
  else if ((local_d8 != 0) || (uVar9 = 1, local_d6 != 0x482b)) {
LAB_10050d793:
    uVar9 = 0;
  }
  *(undefined4 *)(param_1 + 0x6ae0) = uVar9;
  if (local_80 == 0) {
    *(undefined4 *)(param_1 + 0x6f60) = 0x200;
  }
  cVar3 = FUN_1002669ba(*(undefined8 *)(param_1 + 0x66d8));
  if (cVar3 != '\0') {
    uVar7 = FUN_10055ae0c(*(undefined8 *)(param_1 + 0x66d8));
    FUN_10050eb39(param_1,uVar7,param_3,0);
  }
  iVar5 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),pvVar1,0x6372746c,1,param_1 + 0x71c0);
  if (iVar5 != -0x80) {
    if (iVar5 != 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar5 != 0) goto LAB_10050d6c6;
    }
    pvVar2 = (void *)(param_1 + 0x75e0);
    iVar5 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),pvVar1,0x6974756e,1);
    if (iVar5 != -0x80) {
      if (iVar5 != 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar5 != 0) goto LAB_10050d6c6;
      }
      iVar5 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),pvVar1,0x736f6e67,1,param_1 + 0x7a00);
      if (iVar5 != -0x80) {
        if (iVar5 != 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          if (iVar5 != 0) goto LAB_10050d6c6;
        }
        if (CONCAT44(uStack_8c,local_90) < 0x280000001 && *(char *)(param_1 + 0x339) != '\0') {
          uVar6 = (uint)(CONCAT44(uStack_8c,local_90) >> 0x1d) & 0x1e;
          uVar10 = 3;
          if (3 < uVar6) {
            uVar10 = uVar6;
          }
          *(uint *)(param_1 + 0x7e20) = uVar10;
        }
        FUN_1001c62d9(param_1 + 0x7e28,0xce40);
        cVar3 = FUN_1002669ba(*(undefined8 *)(param_1 + 0x66d8));
        if ((cVar3 == '\0') && (*(int *)(param_1 + 0x7e20) != 0)) {
          uVar10 = 0;
          do {
            iVar5 = FUN_1004fa9ac(param_1,uVar10);
            if (iVar5 != 0) {
              if (iVar5 == -0x80) goto LAB_10050d6c6;
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              if (iVar5 != 0) goto LAB_10050d6c6;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(param_1 + 0x7e20));
        }
        if (*(char *)(param_1 + 0x353) != '\0') {
          FUN_1004decb2(param_1);
        }
        if (((*(char *)(param_1 + 0x37c) != '\0') &&
            (iVar5 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),pvVar1,0x70757263,0,
                                   param_1 + 0x159c8), iVar5 != -0x2b)) && (iVar5 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "tempStatus == noErr || tempStatus == fnfErr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (*(char *)(param_1 + 0x396) != '\0') {
          iVar5 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),pvVar1,0x6d656d6f,1,
                                param_1 + 0x15df0);
          if ((iVar5 != -0x80) && (iVar5 != 0)) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          FUN_10017060f(*(undefined8 *)(param_1 + 0x16210));
          *(long *)(param_1 + 0x16210) = 0;
          lVar8 = FUN_10016aa8e(DAT_1008c4d90,pvVar2,"VoiceMemos.plist",1,0);
          *(long *)(param_1 + 0x16210) = lVar8;
          if (lVar8 == 0) {
            uVar7 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                  PTR__kCFTypeDictionaryValueCallBacks_10082e140);
            *(undefined8 *)(param_1 + 0x16210) = uVar7;
          }
        }
        if ((*(char *)(param_1 + 0x33c) != '\0') && (*(char *)(param_1 + 0x3a2) == '\0')) {
          uVar4 = FUN_1002454ac(pvVar1,*(undefined4 *)(param_1 + 0x66b0));
          *(undefined1 *)(param_1 + 0x6add) = uVar4;
        }
        if (*(char *)(param_1 + 0x35f) == '\0') {
          if (*(char *)(param_1 + 0x389) != '\0') {
            _memcpy((void *)(param_1 + 0x16218),pvVar2,0x420);
            *(undefined ***)(param_1 + 0x16638) = &PTR_s_extras_10085f510;
          }
        }
        else {
          FUN_1001e04f5("iTunes Library.itlp",local_6f8);
          lVar8 = param_1 + 0x16218;
          iVar5 = FUN_10017ecc9(pvVar2,local_6f8,lVar8,0);
          if ((iVar5 == -0x2b) && (iVar5 = FUN_100181256(pvVar2,local_6f8,lVar8), iVar5 == 0)) {
            iVar5 = FUN_1001888ba(pvVar2,"Extras.itdb",local_b18,0);
            if ((iVar5 == 0) &&
               (iVar5 = FUN_10017fa7b(local_b18,lVar8,"Genius.itdb",0,0), iVar5 != 0)) {
              FUN_100182d4d(local_b18);
            }
          }
          else {
            if (iVar5 == -0x80) goto LAB_10050d6c6;
            if (iVar5 != 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              if (iVar5 != 0) goto LAB_10050d6c6;
            }
          }
          *(undefined ***)(param_1 + 0x16638) = &PTR_s_genius_10085f4e8;
          iVar5 = FUN_1001888ba(lVar8,"Library.itdb",local_b18,0);
          if ((iVar5 == -0x2b) && (iVar5 = FUN_1001888ba(pvVar2,"iTunesDB",local_b18,0), iVar5 == 0)
             ) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar3 != '\0') {
              local_58 = local_58 & 0xffff0000;
              __os_log_impl(0x100000000,uVar7,1,"MountedIPod() - updated to sqlite db",&local_58,2);
            }
            *(undefined1 *)(param_1 + 0x6afc) = 1;
          }
        }
        cVar3 = FUN_10017cbd0(param_1 + 0x16218);
        if (cVar3 != '\0') {
          FUN_1001e04f5(*(undefined8 *)(*(long *)(param_1 + 0x16638) + 8),local_6f8);
          FUN_1001e26e1(".lock",local_6f8);
          iVar5 = FUN_10017ecc9(param_1 + 0x16218,local_6f8,local_b18,0);
          if (iVar5 == 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar3 != '\0') {
              FUN_1001b8dfc(&local_58,local_6f8);
              local_b24 = FUN_1001b83ae(&local_58);
              local_b28 = 0x8220102;
              __os_log_impl(0x100000000,uVar7,1,"genius sync>  deleting \"%{public}s\"",&local_b28,
                            0xc);
              FUN_1001b7a50(&local_58);
            }
            FUN_100182d4d(local_b18);
          }
        }
        *(undefined1 *)(param_1 + 0x6ad7) = 1;
        if (((*(char *)(param_1 + 0x399) != '\0') && (*(int *)(param_1 + 0x66b0) == 0x69506f64)) &&
           (*(char *)(param_1 + 0x1664b) == '\0')) {
          FUN_1005af942(param_1);
        }
        if ((*(char *)(param_1 + 0x38b) != '\0') && (*(long *)(param_1 + 0x16640) != 0)) {
          FUN_1005a50b0();
        }
        if (param_3 == '\0') {
          if (*(char *)(param_1 + 0x3a3) != '\0') {
            FUN_10050ffe0(param_1,0);
          }
        }
        else {
          if ((*(char *)(param_1 + 0x3b2) != '\0') && (iVar5 = FUN_10050eff9(param_1), iVar5 != 0))
          {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            goto LAB_10050d6c6;
          }
          if (*(char *)(DAT_1008c76a0 + 0x1a92) == '\0') {
            local_b28 = local_b28 & 0xffffff00;
            iVar5 = FUN_10050f474(pvVar2);
            if ((iVar5 == 0) || (iVar5 == -0x27)) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar7 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar3 != '\0') {
                local_58 = local_58 & 0xffff0000;
                __os_log_impl(0x100000000,uVar7,1,"setup> found ShowRegistration file",&local_58,2);
              }
              lVar8 = FUN_100279b99();
              if (*(char *)(lVar8 + 0x21) == '\0') {
                if (*(int *)(param_1 + 0x66b0) == 0x69506f64) {
                  FUN_10050f595(param_1);
                }
                else {
                  FUN_10050fef4(param_1);
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar7 = DAT_1008c75b8;
                  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar3 != '\0') {
                    local_58 = local_58 & 0xffff0000;
                    __os_log_impl(0x100000000,uVar7,1,
                                  "setup> deleted ShowRegistration file since registration not supported"
                                  ,&local_58,2);
                  }
                }
              }
            }
            iVar5 = FUN_1001888ba(pvVar2,"ShowMarketing",local_b18,0);
            if (iVar5 == 0) {
              FUN_100182d4d(local_b18);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar7 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar3 != '\0') {
                local_58 = local_58 & 0xffff0000;
                __os_log_impl(0x100000000,uVar7,1,"setup> deleted ShowMarketing file",&local_58,2);
              }
            }
          }
        }
        FUN_10023318f(param_1,"");
        iVar5 = 0;
        if (*(long *)(param_1 + 0x30) != 0) {
          _memcpy((void *)(*(long *)(param_1 + 0x30) + 0x27b8),param_2,0x420);
          if (*(char *)(param_1 + 0x6ac4) == '\0') {
            FUN_1004ded5a(param_1,0);
          }
          if (*(char *)(param_1 + 0x6ac6) == '\0') {
            FUN_1004d0f38(param_1);
          }
          if (*(char *)(param_1 + 0x379) != '\0') {
            iVar5 = 0;
            FUN_1005100e7(param_1,0);
          }
        }
      }
    }
  }
LAB_10050d6c6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

