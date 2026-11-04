// name: FUN_100352070
// address: 100352070

void FUN_100352070(int *param_1,ushort *param_2,char param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  ushort *puVar10;
  long lVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1003522a0:
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10035239e;
  }
  if (*param_1 != 0x706c7374) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_1003522a0;
  }
  if (*param_2 != 0) {
    uVar9 = 0;
    bVar1 = false;
    do {
      puVar10 = param_2 + (ulong)uVar9 * 0xe + 2;
      FUN_10035194c(param_1,puVar10,param_3);
      iVar5 = FUN_10031fa8a(puVar10);
      if (iVar5 - 0xc1U < 0xffffff40) {
        FUN_100351f3f(param_2,iVar5);
        uVar9 = uVar9 - 1;
      }
      else {
        if (iVar5 == 0x7d) {
          bVar1 = true;
        }
        if ((*(byte *)(param_1 + 0x90) & 4) == 0) {
          uVar4 = FUN_10048c0ca();
          cVar2 = FUN_10048c208(uVar4);
          if (cVar2 == '\0') goto LAB_100352200;
        }
        if (((*(byte *)((long)param_1 + 0x332) & 8) == 0) &&
           (cVar2 = FUN_100492fa3(), cVar2 == '\0')) {
          iVar6 = *(int *)(*(long *)(param_1 + 2) + 0x84);
          if (iVar6 != 0x64637561) {
            if (iVar6 == 0x646f5069) {
              bVar3 = *(byte *)(*(long *)(param_1 + 2) + 0x2d1a) >> 3 & 1;
            }
            else {
              bVar3 = 0;
            }
            if (((iVar5 == 1) && (bVar3 == 0)) && ((param_3 == '\x05' || (param_3 == '\0')))) {
              *(undefined1 *)(puVar10 + 3) = 0;
            }
          }
        }
      }
LAB_100352200:
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(int)(short)*param_2);
    if ((1 < (short)*param_2 && !bVar1) &&
       (cVar2 = FUN_10053916d(param_1 + 0x4e,0x7d), cVar2 != '\0')) {
      FUN_100351ae9(param_2,0x7d,1,0);
    }
  }
  if ((param_4 == '\0') && ((char)param_2[(long)(short)param_2[1] * 0xe + 5] != '\0'))
  goto LAB_10035239e;
  param_2[1] = 0;
  if ((*(byte *)(param_1 + 0x90) & 4) == 0) {
    uVar4 = FUN_10048c0ca();
    iVar5 = 1;
    switch(uVar4) {
    case 2:
switchD_100352294_caseD_2:
      iVar5 = 2;
      break;
    case 3:
switchD_100352294_caseD_3:
      iVar5 = 0x3e;
      break;
    case 4:
    case 5:
switchD_100352294_caseD_4:
      iVar5 = 4;
      break;
    case 6:
      break;
    case 7:
      iVar5 = 0x5b;
      break;
    default:
      switch(uVar4) {
      case 0x41:
        goto switchD_100352294_caseD_4;
      case 0x42:
      case 0x45:
        goto switchD_100352294_caseD_2;
      case 0x43:
        goto switchD_100352294_caseD_3;
      }
    }
  }
  else {
    iVar5 = (uint)((*(byte *)((long)param_1 + 0x332) & 8) == 0) * 2 + 1;
  }
  if (0 < (short)*param_2) {
    puVar10 = param_2 + 5;
    lVar11 = 0;
    do {
      iVar6 = FUN_10031fa8a(puVar10 + -3);
      if ((iVar5 == iVar6) && ((char)*puVar10 != '\0')) goto LAB_100352398;
      lVar11 = lVar11 + 1;
      uVar8 = (ulong)(short)*param_2;
      puVar10 = puVar10 + 0xe;
    } while (lVar11 < (long)uVar8);
    if (0 < (short)*param_2) {
      puVar10 = param_2 + 5;
      lVar11 = 0;
      do {
        if ((char)*puVar10 != '\0') {
          iVar5 = FUN_10031fa8a(puVar10 + -3);
          if (iVar5 != 0x7d) goto LAB_100352398;
          uVar8 = (ulong)*param_2;
        }
        lVar11 = lVar11 + 1;
        puVar10 = puVar10 + 0xe;
      } while (lVar11 < (short)uVar8);
    }
  }
LAB_10035239e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100352398:
  param_2[1] = (ushort)lVar11;
  goto LAB_10035239e;
}

