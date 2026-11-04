// name: FUN_1003f68bf
// address: 1003f68bf

ulong FUN_1003f68bf(long param_1,int param_2,long param_3)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined5 local_58;
  undefined2 local_53;
  char cStack_51;
  undefined5 uStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uStack_50 = 0;
  local_58 = 0;
  local_53 = 0;
  cStack_51 = '\0';
  if (param_2 == 5) {
    if ((*(ushort *)(param_3 + 0x10) & 0xfffe) != 10) {
      uVar3 = FUN_10048c0ca(param_3);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        uVar5 = FUN_10048c208(uVar3);
        return uVar5;
      }
      goto LAB_1003f6a3c;
    }
LAB_1003f69d4:
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
    if ((*(byte *)(param_3 + 0x240) & 4) == 0) {
      if (*(int *)(param_3 + 0x268) == 0x66696c65) {
        iVar4 = FUN_10048256b(param_3,&local_58);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            if (cStack_51 == '\0') {
              uVar1 = *(ushort *)(param_3 + 0x10);
              if ((uVar1 & 0xfffe) != 10) {
                uVar3 = FUN_10048c0ca(param_3);
                cVar2 = FUN_10048c208(uVar3);
                if (cVar2 != '\0') goto LAB_1003f69d4;
                uVar1 = *(ushort *)(param_3 + 0x10);
              }
              if ((uVar1 == 0x23) || (uVar1 == 0x20)) {
                bVar7 = (byte)(*(uint *)(param_1 + 0x100018) >> 0x11) & 1;
              }
              goto LAB_1003f69d7;
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x400;
              local_3a = iVar4;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
        }
      }
      goto LAB_1003f69d4;
    }
  }
LAB_1003f69d7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return (ulong)bVar7;
  }
LAB_1003f6a3c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

