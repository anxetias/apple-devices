// name: FUN_1006033a6
// address: 1006033a6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1006033a6(long param_1,long param_2,undefined1 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100603500:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1006035ae:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100603500;
    }
    if (((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) &&
       (*(long *)(*(long *)(param_2 + 8) + 0x10) != 0)) {
      lVar4 = FUN_1002f930c(*(undefined8 *)(param_1 + 0x30));
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x188) != 0) {
          if (((*(undefined8 **)(param_2 + 8))[2] != *(long *)(param_1 + 0x30)) &&
             (lVar4 = FUN_100307b9e(*(long *)(param_1 + 0x30),**(undefined8 **)(param_2 + 8)),
             lVar4 != 0)) {
            if ((*(char *)(param_1 + 0x396) == '\0') ||
               ((uVar2 = FUN_1004744bf(lVar4,0), (uVar2 >> 0x14 & 1) == 0 ||
                (cVar1 = FUN_10032ea8f(param_1,lVar4), cVar1 != '\0')))) {
              uVar5 = FUN_1002b1255(param_2,0);
              if (((uVar5 & 0x810090) != 0) &&
                 (lVar7 = *(long *)(lVar4 + 0x58),
                 *(long *)(param_2 + 0x68) == *(long *)(*(long *)(lVar4 + 0x58) + 0x68)))
              goto LAB_100603564;
              lVar7 = *(long *)(lVar4 + 0x180);
              lVar6 = FUN_10030064f(*(undefined8 *)(param_2 + 8));
              lVar8 = *(long *)(lVar4 + 0x58);
              if (lVar7 == lVar6) {
                if (lVar8 == 0) {
                  lVar8 = 0;
                }
                else if ((*(byte *)(lVar8 + 0x4a) & 1) != 0) goto LAB_10060368d;
              }
              if (DAT_1008c7808 == '\0') {
                FUN_100538abf(&DAT_1008c77e8,&DAT_100753530);
                DAT_1008c7808 = '\x01';
              }
              _DAT_1008c77d8 = _DAT_1008c77f8;
              uRam00000001008c77e0 = uRam00000001008c7800;
              _DAT_1008c77c8 = _DAT_1008c77e8;
              uRam00000001008c77cc = uRam00000001008c77ec;
              uRam00000001008c77d0 = uRam00000001008c77f0;
              uRam00000001008c77d4 = uRam00000001008c77f4;
              cVar1 = FUN_10030272d(param_2,lVar8,&DAT_1008c77c8,0,0,param_3,1);
              if (cVar1 == '\0') goto LAB_10060369b;
            }
LAB_10060368d:
            lVar7 = *(long *)(lVar4 + 0x58);
            if (*(long *)(lVar4 + 0x58) != 0) goto LAB_100603564;
          }
        }
LAB_10060369b:
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        if (DAT_1008c7808 == '\0') {
          FUN_100538abf(&DAT_1008c77e8,&DAT_100753530);
          DAT_1008c7808 = '\x01';
        }
        _DAT_1008c77d8 = _DAT_1008c77f8;
        uRam00000001008c77e0 = uRam00000001008c7800;
        _DAT_1008c77c8 = _DAT_1008c77e8;
        uRam00000001008c77cc = uRam00000001008c77ec;
        uRam00000001008c77d0 = uRam00000001008c77f0;
        uRam00000001008c77d4 = uRam00000001008c77f4;
        lVar7 = FUN_100306976(uVar3,param_2,&DAT_1008c77c8,0,0,param_3);
        if (lVar7 != 0) {
          if ((((*(char *)(param_1 + 0x3a2) != '\0') &&
               (**(long **)(lVar7 + 8) != **(long **)(param_2 + 8))) &&
              (-1 < *(int *)((long)*(long **)(lVar7 + 8) + 0xc2))) &&
             (*(ulong *)(*(long *)(lVar7 + 0x10) + 0xa8) <=
              *(ulong *)(*(long *)(param_2 + 0x10) + 0xa8))) {
            lVar7 = 0;
          }
          goto LAB_100603564;
        }
      }
      lVar7 = 0;
      goto LAB_100603564;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackInstanceIsValid(libraryTrackInstance)";
      goto LAB_1006035ae;
    }
  }
  FUN_1001782e9(0,0);
  lVar7 = 0;
LAB_100603564:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar7;
}

