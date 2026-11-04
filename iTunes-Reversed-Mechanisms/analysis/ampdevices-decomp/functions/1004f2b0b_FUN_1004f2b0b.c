// name: FUN_1004f2b0b
// address: 1004f2b0b

int FUN_1004f2b0b(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 local_a88;
  char *local_a84;
  undefined2 local_a7c;
  char *local_a7a;
  undefined1 local_888 [1056];
  undefined1 local_468 [1056];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if (*(long *)(param_1 + 0x66c0) != 0) goto LAB_1004f2b83;
  iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x61727477,param_2,
                        local_468);
  if (iVar2 == 0) {
    iVar2 = FUN_1001888ba(local_468,"ArtworkDB",local_888,0);
    if (iVar2 == 0) {
      lVar4 = FUN_100495500(local_468);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x143c) = 1;
        *(long *)(param_1 + 0x66c0) = lVar4;
        iVar3 = FUN_10038a96f(lVar4,local_888,0,0,0);
        if (iVar3 != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar5 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 != '\0') {
            local_a88 = 0x4000100;
            local_a84 = (char *)CONCAT44(local_a84._4_4_,iVar3);
            __os_log_impl(0x100000000,uVar5,0x10,"failed to read ArtworkDB (%d)",&local_a88,8);
          }
          iVar2 = -0x80;
          if (iVar3 != -0x80) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            iVar2 = iVar3;
            if (cVar1 != '\0') {
              local_a88 = 0x8220202;
              local_a84 = "Assertion failure";
              local_a7c = 0x400;
              local_a7a = (char *)CONCAT44(local_a7a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_a88,0x12);
            }
          }
          goto LAB_1004f2bd1;
        }
LAB_1004f2d55:
        lVar4 = *(long *)(param_1 + 0x66c0);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_a88 = 0x8220202;
            local_a84 = "Assertion failure";
            local_a7c = 0x822;
            local_a7a = "handlerData->albumArtworkLibrary != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_a88,0x16);
          }
          iVar2 = 0;
          FUN_1001782e9(0,0);
          lVar4 = *(long *)(param_1 + 0x66c0);
          if (lVar4 == 0) goto LAB_1004f2b83;
        }
        *(undefined8 *)(lVar4 + 0x1440) = 0x1f400000;
        iVar2 = 0;
        goto LAB_1004f2b83;
      }
      *(undefined8 *)(param_1 + 0x66c0) = 0;
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        puVar6 = &local_a88;
LAB_1004f2e99:
        *puVar6 = 0x8220202;
        *(char **)(puVar6 + 1) = "Assertion failure";
        *(undefined2 *)(puVar6 + 3) = 0x822;
        *(char **)((long)puVar6 + 0xe) = "handlerData->albumArtworkLibrary != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",puVar6,0x16);
      }
LAB_1004f2e02:
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
    }
    else {
LAB_1004f2bd1:
      if (param_2 != '\0') {
        if (*(long *)(param_1 + 0x66c0) != 0) {
          FUN_100495a1c();
        }
        lVar4 = FUN_100495500(local_468);
        if (lVar4 == 0) {
          *(undefined8 *)(param_1 + 0x66c0) = 0;
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            puVar6 = &local_48;
            goto LAB_1004f2e99;
          }
          goto LAB_1004f2e02;
        }
        *(undefined1 *)(lVar4 + 0x143c) = 1;
        *(long *)(param_1 + 0x66c0) = lVar4;
        bVar7 = *(char *)(param_1 + 0x35d) != '\0';
        cVar1 = bVar7 + '\x02';
        if (*(char *)(param_1 + 0x35e) == '\0') {
          cVar1 = bVar7;
        }
        FUN_1001e04f5("ArtworkDB",&local_a88);
        iVar2 = FUN_10038b674(*(undefined8 *)(param_1 + 0x66c0),local_468,&local_a88,cVar1,local_888
                             );
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            FUN_100496f8c(*(undefined8 *)(param_1 + 0x66c0),0);
            goto LAB_1004f2d55;
          }
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = iVar2;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x4000100;
          local_44 = (char *)CONCAT44(local_44._4_4_,iVar2);
          __os_log_impl(0x100000000,uVar5,0x10,"failed to write ArtworkDB (%d)",&local_48,8);
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x66c0) != 0) {
    FUN_100495a1c();
    *(undefined8 *)(param_1 + 0x66c0) = 0;
  }
LAB_1004f2b83:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

