// name: FUN_100584849
// address: 100584849

char FUN_100584849(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int local_b0 [2];
  char local_a8;
  undefined8 local_98;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = '\x04';
  if (param_4 + 1U < 0x15) {
    iVar3 = FUN_1001cf3f5(param_3);
    cVar1 = '\x01';
    if (iVar3 == 0) {
      local_68 = FUN_1001d0b82(param_3);
      if (local_68 != 0) {
        local_80 = param_2 + 0x2f0;
        iVar3 = 0;
        local_78 = param_2;
        local_70 = param_1;
        local_60 = param_3;
        do {
          iVar4 = FUN_1001cf495(param_3,iVar3);
          iVar5 = local_b0[0];
          if (iVar4 != 0) {
LAB_100584a6c:
            cVar1 = '\x02';
            goto LAB_100584a6f;
          }
          if (local_a8 != '\0') {
            cVar1 = FUN_100584849(local_70,local_78,local_98,param_4 + 1U);
            goto LAB_100584a51;
          }
          uVar6 = FUN_1005396f9(&DAT_1008c2620,&DAT_100759130,0);
          uVar6 = FUN_10053974b(&DAT_1008c2641,uVar6,&DAT_10075920c);
          cVar1 = FUN_10053916d(uVar6,iVar5);
          if (cVar1 == '\0') goto LAB_100584a6c;
          if (iVar5 == 0x28) {
            FUN_1001d1f8e(local_b0,&local_88);
            cVar1 = '\x04';
            param_3 = local_60;
            if (*(long *)(local_78 + 0x60) != local_88) {
              lVar7 = FUN_100587ce4(local_70,local_b0);
              if (lVar7 == 0) {
                cVar1 = '\x03';
                param_3 = local_60;
              }
              else {
                if ((*(byte *)(lVar7 + 0x298) & 1) != 0) {
                  FUN_100584648(lVar7);
                  if (*(char *)(lVar7 + 0x299) != '\x01') {
                    param_3 = local_60;
                    if (*(char *)(lVar7 + 0x299) != '\x06') {
                      cVar1 = '\x05';
                    }
                    goto LAB_100584a51;
                  }
                }
                iVar5 = FUN_1001c6b4a(lVar7 + 200,local_80);
                cVar1 = '\x01';
                param_3 = local_60;
                if ((iVar5 != -0x80) && (iVar5 != 0)) {
                  local_64 = iVar5;
                  uVar6 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar6,0x10);
                  param_3 = local_60;
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = local_64;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                    param_3 = local_60;
                  }
                }
              }
            }
LAB_100584a51:
            if (cVar1 != '\x01') goto LAB_100584a6f;
          }
          iVar3 = iVar3 + 1;
        } while (local_68 != iVar3);
        cVar1 = '\x01';
      }
LAB_100584a6f:
      FUN_1001cf778(param_3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar1;
}

