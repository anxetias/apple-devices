// name: FUN_100591b55
// address: 100591b55

int FUN_100591b55(long param_1,undefined8 param_2,uint param_3,undefined4 param_4,undefined8 param_5
                 )

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100495380();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_44a = "ITImageLibraryIsValid(imageLibrary)";
LAB_100591e50:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_44a = "options != 0";
      goto LAB_100591e50;
    }
  }
  else {
    if ((param_3 & 0xc) != 8) {
      lVar5 = FUN_100496019(param_1);
      if (lVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar7 = 0;
        do {
          for (lVar6 = FUN_1004968c5(lVar5); lVar6 != 0; lVar6 = FUN_100496985(lVar6)) {
            uVar1 = *(uint *)(lVar6 + 0x10);
            if ((uVar1 == 4) || (uVar1 == 1)) {
              if ((param_3 & 2) != 0) goto LAB_100591ced;
            }
            else if (((param_3 & 1) != 0) && (899 < uVar1)) {
LAB_100591ced:
              iVar3 = FUN_10049980b(lVar6,&local_458,0);
              if (iVar3 == 0) {
                FUN_100591963(&local_458,param_2);
              }
              FUN_10049a09d(lVar6,0,0,0);
              if ((param_3 & 8) != 0) {
                *(undefined1 *)(lVar6 + 0x51) = 1;
              }
            }
          }
          if ((param_3 & 8) != 0) {
            *(undefined1 *)(lVar5 + 0x83) = 1;
          }
          iVar7 = iVar7 + 1;
          iVar3 = FUN_1001ceb24(param_5,param_4,iVar7,*(undefined4 *)(param_1 + 8),0);
          if (iVar3 != 0) {
            if (iVar3 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_458 = 0x8220202;
                local_454 = "Assertion failure";
                local_44c = 0x400;
                local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12
                                   );
              }
            }
            if ((param_3 & 8) == 0) goto LAB_100591dd7;
            FUN_100591ec9(param_1);
            FUN_100496791(param_1);
            goto LAB_100591c6c;
          }
          lVar5 = FUN_1004960d0(lVar5);
        } while (lVar5 != 0);
        iVar3 = 0;
      }
LAB_100591dd7:
      if (((param_3 & 4) != 0) && (*(char *)(param_1 + 5) != '\0')) {
        lVar5 = param_1 + 4000;
        iVar7 = FUN_10017d477(lVar5,0,0);
        if (iVar7 == 0) {
          FUN_100591963(lVar5,param_2);
        }
        FUN_1001c62d9(lVar5,0x420);
        *(undefined1 *)(param_1 + 5) = 0;
      }
      goto LAB_100591c6c;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_44a = 
      "(dontOrphanFiles == false) || ((options & kDeleteITImageLibraryFiles_DeleteLibrary) != 0)";
      goto LAB_100591e50;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_100591c6c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

