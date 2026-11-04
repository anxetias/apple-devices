// name: FUN_10054feb6
// address: 10054feb6

int FUN_10054feb6(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,long param_5,
                 int param_6,uint param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  long local_70;
  char local_61;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "descriptor != nullptr && descriptor[0] != 0";
LAB_100550183:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_5 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "buffer != nullptr";
      goto LAB_100550183;
    }
  }
  else {
    if (param_6 != 0) {
      iVar2 = FUN_10054d4e4();
      if (iVar2 == -0x80) {
LAB_1005501ce:
        if (local_70 != 0) {
          FUN_1001c8d4b(local_70,0);
        }
      }
      else {
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_1005501ce;
        }
        lVar4 = param_1 + 0x710;
        local_60 = param_1;
        iVar2 = FUN_10015cd83(lVar4,&local_80);
        param_1 = local_60;
        if (iVar2 == -0x80) goto LAB_1005501ce;
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          param_1 = local_60;
          if (cVar1 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            goto LAB_1005502fc;
          }
          goto LAB_1005501ce;
        }
        iVar2 = FUN_1005d872c(lVar4,param_7 & 1,&local_61,&local_70);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        param_1 = local_60;
        if (local_70 != 0) {
          iVar2 = FUN_1001c8e4e(local_70,&local_7c);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              iVar2 = FUN_1001c97e8(local_70,0x2d2d2d2d,"com.apple.iTunes",0x10,param_4 + 1,*param_4
                                    ,&local_78);
              if (iVar2 != -0x80) {
                if (iVar2 == 0) {
                  if (local_78 == 0) {
                    iVar2 = FUN_1001c9b1d(local_70,&local_78);
                    if (iVar2 != -0x80) {
                      if (iVar2 == 0) {
                        iVar2 = FUN_1001c9f0c(local_78,0x2d2d2d2d,"com.apple.iTunes",0x10);
                        if (iVar2 != -0x80) {
                          if (iVar2 == 0) {
                            iVar2 = FUN_1001ca240(local_78,param_4 + 1,*param_4);
                            param_1 = local_60;
                            if (iVar2 != -0x80) {
                              if (iVar2 == 0) goto LAB_100550015;
                              uVar3 = FUN_1001cc310();
                              cVar1 = _os_log_type_enabled(uVar3,0x10);
                              param_1 = local_60;
                              if (cVar1 != '\0') {
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                                goto LAB_1005502fc;
                              }
                            }
                          }
                          else {
                            uVar3 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(uVar3,0x10);
                            param_1 = local_60;
                            if (cVar1 != '\0') {
                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                              goto LAB_1005502fc;
                            }
                          }
                        }
                      }
                      else {
                        uVar3 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar3,0x10);
                        param_1 = local_60;
                        if (cVar1 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                          goto LAB_1005502fc;
                        }
                      }
                    }
                  }
                  else {
LAB_100550015:
                    iVar2 = FUN_1001cacbc(local_78,1,1,param_5,param_6);
                    if (iVar2 != -0x80) {
                      if (iVar2 == 0) {
                        if (local_61 == '\0') {
                          iVar2 = FUN_1001cbf54(local_70,local_7c,1);
                          if (iVar2 != -0x80) {
                            if (iVar2 == 0) goto LAB_100550049;
                            uVar3 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(uVar3,0x10);
                            param_1 = local_60;
                            if (cVar1 != '\0') {
                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                              goto LAB_1005502fc;
                            }
                          }
                        }
                        else {
LAB_100550049:
                          iVar2 = FUN_10054db1c(param_1,local_80,param_7,param_8);
                        }
                      }
                      else {
                        uVar3 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar3,0x10);
                        param_1 = local_60;
                        if (cVar1 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                          goto LAB_1005502fc;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  param_1 = local_60;
                  if (cVar1 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                    goto LAB_1005502fc;
                  }
                }
              }
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              param_1 = local_60;
              if (cVar1 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_1005502fc:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
                param_1 = local_60;
              }
            }
          }
          goto LAB_1005501ce;
        }
      }
      FUN_10054d72e(param_1);
      goto LAB_10055008f;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "bufferSize != 0";
      goto LAB_100550183;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10055008f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

