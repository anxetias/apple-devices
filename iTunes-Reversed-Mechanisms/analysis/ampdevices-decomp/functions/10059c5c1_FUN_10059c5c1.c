// name: FUN_10059c5c1
// address: 10059c5c1

int FUN_10059c5c1(undefined8 param_1,uint param_2,ulong *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  long local_a50;
  ulong *local_a48;
  long local_a40;
  ulong *local_a38;
  ulong *local_a30;
  long local_a28;
  long local_a20;
  char *local_a18;
  ulong local_a10;
  ulong *local_a08;
  uint local_a00;
  char local_9f9;
  undefined1 local_9f8 [1056];
  undefined1 local_5d8 [1056];
  undefined1 local_1b8 [64];
  undefined1 local_178 [64];
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10059c41c(0x69506f64,1,0,param_3);
  iVar3 = FUN_1002441f8(0x69506f64,param_1,0x64766365,0,local_5d8);
  if ((iVar3 != 0) || (iVar3 = FUN_1001888ba(local_5d8,"SysInfo",local_9f8,0), iVar3 != 0))
  goto LAB_10059c97c;
  FUN_10059c41c(0x69506f64,1,0,param_3);
  iVar3 = FUN_100180bd2(local_9f8,&local_a20,&local_a50,0);
  if (iVar3 != 0) goto LAB_10059c97c;
  *(undefined1 *)(local_a20 + local_a50) = 0;
  local_a08 = (ulong *)((long)param_3 + 0x234);
  local_a00 = param_2;
  lVar6 = FUN_1001e1ecd(local_a20,&local_a18,&local_a10);
  if (lVar6 != 0) {
    local_a48 = param_3 + 1;
    local_a38 = (ulong *)((long)param_3 + 0xc);
    local_a30 = param_3 + 0x72;
    local_a40 = (long)param_3 + 0x16;
    local_a28 = (long)param_3 + 0xf4;
    do {
      if (local_a10 < 3) break;
      if (local_a10 < 0x40) {
        local_178[0] = 0;
        local_1b8[0] = 0;
        iVar4 = _sscanf(local_a18,"%s %s",local_178,local_1b8);
        if (iVar4 == 2) {
          local_9f9 = FUN_1001df957(local_178,"buildID:",0);
          uVar8 = 3;
          puVar9 = local_a48;
          if (local_9f9 == '\0') {
            cVar2 = FUN_1001df957(local_178,"updaterFamily:",0);
            uVar8 = 4;
            puVar9 = local_a38;
            if (cVar2 == '\0') {
              cVar2 = FUN_1001df957(local_178,"iPodFamily:",0);
              uVar8 = 8;
              puVar9 = local_a08;
              if (cVar2 == '\0') {
                cVar2 = FUN_1001df957(local_178,"oemv:",1);
                if (cVar2 == '\0') {
                  cVar2 = FUN_1001df957(local_178,"atomicUpdate:",0);
                  if (cVar2 == '\0') {
                    cVar2 = FUN_1001df957(local_178,"pszSerialNumber:",0);
                    if (cVar2 != '\0') {
                      FUN_1001dfbb3(local_1b8,local_a28,0x100);
                    }
                  }
                  else {
                    *(undefined1 *)((long)param_3 + 0x2e1) = 1;
                  }
                  goto LAB_10059c85d;
                }
                *(undefined1 *)((long)param_3 + 0x2e5) = 1;
                uVar8 = 0x8000;
                puVar9 = local_a30;
              }
            }
          }
          *param_3 = *param_3 | uVar8;
          FUN_1001dfb1f(local_1b8,local_138,0xff);
          uVar5 = FUN_1001e0fc3(local_138);
          *(undefined4 *)puVar9 = uVar5;
          if (local_9f9 != '\0') {
            FUN_1001e2979(puVar9,1,local_a40,0x20);
          }
        }
      }
LAB_10059c85d:
      lVar6 = FUN_1001e1ecd(lVar6,&local_a18,&local_a10);
    } while (lVar6 != 0);
  }
  uVar8 = *param_3;
  if (*(int *)((long)param_3 + 0xc) == 0) {
    uVar8 = uVar8 & 0xfffffffffffffffb;
    *param_3 = uVar8;
  }
  if ((int)*local_a08 == 0) {
    uVar8 = uVar8 & 0xfffffffffffffff7;
    *param_3 = uVar8;
  }
  if ((uVar8 & 4) != 0) goto LAB_10059c938;
  if ((short)local_a00 == 0) {
    bVar1 = *(byte *)((long)param_3 + 0xb);
    uVar7 = (uint)bVar1;
    if (bVar1 == 1) goto LAB_10059c92e;
    if (bVar1 == 2) {
      uVar7 = 2;
      if ((*(byte *)((long)param_3 + 10) < 0x20) ||
         (uVar7 = 3, *(byte *)((long)param_3 + 10) < 0x30)) goto LAB_10059c92e;
    }
  }
  else {
    uVar7 = 1;
    if (0x127 < (local_a00 & 0xffff)) {
      uVar7 = (uint)((local_a00 & 0xffff) < 0x13c) * 2;
    }
LAB_10059c92e:
    *(uint *)((long)param_3 + 0xc) = uVar7;
    uVar8 = uVar8 | 4;
    *param_3 = uVar8;
  }
LAB_10059c938:
  if ((uVar8 & 8) != 0) goto LAB_10059c970;
  if ((short)local_a00 == 0) {
    bVar1 = *(byte *)((long)param_3 + 0xb);
    uVar7 = (uint)bVar1;
    if (bVar1 == 1) goto LAB_10059c963;
    if (bVar1 == 2) {
      uVar7 = 2;
      if ((*(byte *)((long)param_3 + 10) < 0x20) ||
         (uVar7 = 3, *(byte *)((long)param_3 + 10) < 0x30)) goto LAB_10059c963;
    }
  }
  else {
    uVar7 = 1;
    if (0x127 < (local_a00 & 0xffff)) {
      uVar7 = (uint)((local_a00 & 0xffff) < 0x13c) * 2;
    }
LAB_10059c963:
    *(uint *)((long)param_3 + 0x234) = uVar7;
    *param_3 = uVar8 | 8;
  }
LAB_10059c970:
  FUN_1001c64c1(local_a20);
LAB_10059c97c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

