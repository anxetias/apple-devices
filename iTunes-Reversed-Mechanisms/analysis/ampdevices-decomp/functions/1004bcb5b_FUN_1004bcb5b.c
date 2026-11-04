// name: FUN_1004bcb5b
// address: 1004bcb5b

/* WARNING: Type propagation algorithm not settling */

int FUN_1004bcb5b(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c[0] = 0;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_4a = "downloadItem != __null";
      goto LAB_1004bcd15;
    }
    goto LAB_1004bcdb5;
  }
  FUN_1004abe13(lVar3,0x72736f70,local_5c);
  if ((local_5c[0] & 0x200000) == 0) {
LAB_1004bcbb5:
    iVar8 = 0;
    uVar1 = FUN_100167dd2(param_2,&cf_disable_md5,0);
    *(undefined1 *)(param_1 + 1) = uVar1;
    lVar3 = FUN_100171475(param_2,&cf_partial_md5);
    if (lVar3 != 0) {
      FUN_1004bce81(param_1 + 10,lVar3,0);
    }
    lVar3 = FUN_100171475(param_2,&cf_segment_md5);
    if ((lVar3 != 0) && (param_1[0x21] != 0)) {
      FUN_1004bce81(param_1 + 0x23,lVar3);
    }
  }
  else {
    lVar4 = FUN_100171475(param_2,&cf_md5);
    if (lVar4 == 0) {
      if ((local_5c[0] & 0x100000) == 0) goto LAB_1004bcbb5;
    }
    else {
      lVar5 = _CFGetTypeID(lVar4);
      lVar6 = _CFStringGetTypeID();
      if (lVar5 == lVar6) {
        if ((local_5c[0] & 0x100000) == 0) {
          if (*(char *)((long)param_1 + 9) == '\0') goto LAB_1004bcbb5;
        }
        else if (*(char *)((long)param_1 + 9) == '\0') {
          uVar7 = FUN_1001cc310((long)param_1 + 9);
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_4a = "( ( (&(inHashInfo)->mainExpectedHash)->hash[0] != 0 ) )";
            goto LAB_1004bcd15;
          }
          goto LAB_1004bcdb5;
        }
        cVar2 = FUN_1001dfa62((long)param_1 + 9,lVar4,0);
        if (cVar2 != '\0') goto LAB_1004bcbb5;
        if ((param_3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
          FUN_10017fdd8(param_3,1,1,FUN_1004add18,0);
          FUN_100534e54(lVar3 + 0x1a8,param_3,0,1);
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_4a = "CFGetTypeID(dictionaryString) == CFStringGetTypeID()";
LAB_1004bcd15:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_5c[1] = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
LAB_1004bcdb5:
        FUN_1001782e9(0,0);
      }
    }
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    iVar8 = -0x32;
    if (cVar2 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffffce);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8 + (uint)(iVar8 == 0);
}

