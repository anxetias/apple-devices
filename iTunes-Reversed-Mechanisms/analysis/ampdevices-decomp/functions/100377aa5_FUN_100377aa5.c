// name: FUN_100377aa5
// address: 100377aa5

undefined8
FUN_100377aa5(void *param_1,undefined2 *param_2,long param_3,long param_4,char param_5,void *param_6
             )

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  ulong local_860;
  char local_858 [4];
  char *local_854;
  undefined2 local_84c;
  char *local_84a;
  char local_58 [4];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (undefined2 *)0x0 && param_3 == 0) && param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      builtin_strncpy(local_858,"\x02\x02\"\b",4);
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "childName != nullptr || childNameUTF8 != nullptr || childNameCF != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_858,0x16);
    }
    FUN_1001782e9(0,0);
  }
  _memcpy(param_6,param_1,0x420);
  *(undefined2 *)((long)param_6 + 4) = 0;
  pcVar7 = (char *)((long)param_6 + 0x1c);
  sVar4 = _strlen(pcVar7);
  if (sVar4 < 0x1fe) {
    if (sVar4 == 0) {
      sVar4 = 0;
    }
    else if (pcVar7[sVar4 - 1] != '/') {
      FUN_1001df1e7("/",pcVar7,0x200);
      sVar4 = sVar4 + 1;
    }
    if (param_2 == (undefined2 *)0x0) {
      if (param_4 == 0) {
        local_860 = FUN_1001dfbb3(param_3,local_858,0x800);
      }
      else {
        cVar2 = FUN_10017393c(param_4,local_858,0x800,0x8000100);
        if (cVar2 == '\0') {
          uVar3 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            builtin_strncpy(local_58,"\x02\x02\"\b",4);
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "JRCFStringGetCString( childNameCF, childNameLocal, sizeof(childNameLocal), kCFStringEncodingUTF8 )"
            ;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar3 = 0xffffffdb;
          goto LAB_100377cbb;
        }
        sVar5 = _strlen(local_858);
        local_860 = sVar5 & 0xffffffff;
      }
    }
    else {
      FUN_1001e73f2(param_2 + 1,*param_2,local_858,0x7ff,&local_860);
      local_858[local_860] = '\0';
    }
    if (sVar4 + local_860 < 0x200) {
      if (param_5 == '\0') {
        pcVar6 = local_858;
        do {
          if (*pcVar6 == '/') {
            *pcVar6 = '/';
          }
          else if (*pcVar6 == '\0') break;
          pcVar6 = pcVar6 + 1;
        } while( true );
      }
      if (local_858[0] == '/') {
        pcVar6 = local_858;
        do {
          local_860 = local_860 - 1;
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
        } while (*pcVar1 == '/');
      }
      else {
        pcVar6 = local_858;
      }
      FUN_1001df1e7(pcVar6,pcVar7,0x200);
      uVar3 = 0;
      goto LAB_100377cbb;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      pcVar7 = local_58;
      builtin_strncpy(local_58,"\x02\x02\"\b",4);
      local_54 = "Assertion failure";
      local_4c = 0x822;
      pcVar6 = "pathLength + childNameLength <= 511";
      goto LAB_100377da3;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      pcVar7 = local_858;
      builtin_strncpy(local_858,"\x02\x02\"\b",4);
      local_854 = "Assertion failure";
      local_84c = 0x822;
      pcVar6 = "pathLength < 511 - 1";
LAB_100377da3:
      *(char **)(pcVar7 + 0xe) = pcVar6;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",pcVar7,0x16);
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xfffff7c2;
LAB_100377cbb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

