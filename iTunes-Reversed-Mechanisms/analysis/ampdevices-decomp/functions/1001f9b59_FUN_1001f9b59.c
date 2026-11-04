// name: FUN_1001f9b59
// address: 1001f9b59

int FUN_1001f9b59(long param_1,undefined8 param_2,void *param_3,uint param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  char local_b60 [80];
  undefined1 local_b10 [80];
  void *local_ac0;
  undefined1 local_ab8 [1056];
  undefined1 local_698 [520];
  long local_490;
  undefined8 local_488;
  uint local_480;
  undefined8 local_478;
  undefined1 local_470 [1060];
  int local_4c;
  long local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001f77de();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006cb5ad(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1001f9e78;
  }
  if (*(long *)(param_1 + 0x430) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006cb537(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x36;
    goto LAB_1001f9e78;
  }
  local_ac0 = param_3;
  iVar2 = FUN_10017d477(param_3,local_b60,0);
  if (iVar2 == -0x80) goto LAB_1001f9e78;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006cb4cb(iVar2,uVar3);
    }
    goto LAB_1001f9e78;
  }
  FUN_1001c62d9(&local_490,0x458);
  pvVar4 = local_ac0;
  local_490 = param_1;
  local_488 = param_2;
  local_480 = param_4;
  local_478 = param_5;
  if ((param_4 & 0x12) == 0) {
    iVar2 = FUN_10017d5ba(local_ac0,local_470);
    if (iVar2 != -0x80) {
      pvVar4 = local_ac0;
      if (iVar2 == 0) goto LAB_1001f9ce6;
      uVar3 = FUN_1001cc310(local_ac0);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006cb45f(iVar2,uVar3);
      }
    }
  }
  else if (local_b60[0] == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006cb311(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x57f;
  }
  else {
    _memcpy(local_470,local_ac0,0x420);
LAB_1001f9ce6:
    iVar2 = FUN_10017fdd8(pvVar4,0x7fff,0xc,FUN_1001f9eba,&local_490);
    if (iVar2 == 0) {
      if ((param_4 & 0x10) == 0) {
LAB_1001f9d17:
        iVar2 = FUN_10017fdd8(local_ac0,0x7fff,0xc,FUN_1001fa5d0,&local_490);
      }
      else {
        FUN_1001e04f5("mimetype",local_698);
        iVar2 = FUN_10017ecc9(local_ac0,local_698,local_ab8,local_b10);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            local_4c = local_4c + 1;
            iVar2 = FUN_1001f9ede(&local_490,local_ab8,local_b10,local_698);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) goto LAB_1001f9d17;
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_1006cb387(iVar2,uVar3);
              }
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006cb3f3(iVar2,uVar3);
            }
          }
        }
      }
    }
  }
  if (local_48 != 0) {
    FUN_1001c652e();
  }
LAB_1001f9e78:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

