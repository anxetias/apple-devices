// name: FUN_1001f8c53
// address: 1001f8c53

bool FUN_1001f8c53(undefined8 param_1,char *param_2,size_t param_3,char *param_4,undefined8 param_5,
                  undefined1 *param_6)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 local_460 [40];
  char local_438 [1024];
  long local_38;
  
  uVar4 = 0x400;
  if (param_4 != (char *)0x0) {
    uVar4 = param_5;
  }
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pcVar6 = local_438;
  if (param_4 != (char *)0x0) {
    pcVar6 = param_4;
  }
  puVar5 = local_460;
  if (param_6 != (undefined1 *)0x0) {
    puVar5 = param_6;
  }
  bVar7 = false;
  iVar2 = FUN_1001f7dcb(param_1,pcVar6,uVar4,puVar5,0,0,0,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (param_2 == (char *)0x0) {
        bVar7 = true;
        goto LAB_1001f8d13;
      }
      sVar3 = _strlen(pcVar6);
      if (param_3 + 1 < sVar3) {
        iVar2 = _strncasecmp(pcVar6,param_2,param_3);
        if (iVar2 == 0) {
          bVar7 = pcVar6[param_3] == '/';
          goto LAB_1001f8d13;
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006ca54f(iVar2,uVar4);
      }
    }
    bVar7 = false;
  }
LAB_1001f8d13:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

