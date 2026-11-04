// name: FUN_1001d3ae7
// address: 1001d3ae7

int FUN_1001d3ae7(sqlite3 *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,ulong param_7,ulong *param_8,double *param_9)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 uVar7;
  uchar *puVar8;
  double dVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  sqlite3_stmt *local_38;
  
  local_38 = (sqlite3_stmt *)0x0;
  if (param_6 != 8 && param_9 == (double *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006b3351(uVar7);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  pcVar5 = "ROWID";
  if (param_3 != (char *)0x0) {
    pcVar5 = param_3;
  }
  if (param_8 != (ulong *)0x0) {
    *param_8 = 0;
  }
  bVar1 = true;
  if (param_7 == 0) {
    if (param_6 - 5U < 3) {
      *param_9 = 0.0;
      bVar1 = false;
    }
    else if (param_6 != 8) {
      iVar10 = -0x32;
      pcVar5 = (char *)0x0;
      goto switchD_1001d3d2e_default;
    }
  }
  pcVar5 = _sqlite3_mprintf("SELECT %s FROM %s WHERE %s=%lld",param_5,param_2,pcVar5);
  if (pcVar5 == (char *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006b358b(uVar7);
    }
    pcVar5 = (char *)0x0;
    goto LAB_1001d3c5f;
  }
  sVar6 = _strlen(pcVar5);
  uVar3 = _sqlite3_prepare_v2(param_1,pcVar5,(int)sVar6,&local_38,(char **)0x0);
  iVar10 = -0x80;
  if ((1 < uVar3 - 100) && (uVar3 != 0)) {
    if (uVar3 != 4) {
      iVar10 = (uVar3 & 0xff) + 13000;
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_1006b351f(iVar10,uVar7);
      }
    }
    goto switchD_1001d3d2e_default;
  }
  uVar3 = _sqlite3_step(local_38);
  if ((int)uVar3 < 100) {
    if (uVar3 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_1006b33c7(uVar7);
      }
      FUN_1001782e9(0,0);
      iVar10 = 0x3360;
      goto switchD_1001d3d2e_default;
    }
    if (uVar3 == 4) goto switchD_1001d3d2e_default;
LAB_1001d3cad:
    iVar10 = (uVar3 & 0xff) + 13000;
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006b34b3(iVar10,uVar7);
    }
    goto switchD_1001d3d2e_default;
  }
  if (uVar3 != 100) {
    if (uVar3 == 0x65) {
      iVar10 = 0x335e;
      goto switchD_1001d3d2e_default;
    }
    goto LAB_1001d3cad;
  }
  iVar10 = 0;
  switch(param_6) {
  case 2:
    iVar10 = 0;
    iVar4 = _sqlite3_column_int(local_38,0);
    *(int *)param_9 = iVar4;
    uVar11 = 4;
    break;
  case 3:
    dVar9 = (double)_sqlite3_column_int64(local_38,0);
    *param_9 = dVar9;
    goto switchD_1001d3e46_caseD_1;
  case 4:
    dVar9 = _sqlite3_column_double(local_38,0);
    *param_9 = dVar9;
switchD_1001d3e46_caseD_1:
    iVar10 = 0;
    uVar11 = 8;
    break;
  case 5:
    puVar8 = _sqlite3_column_text(local_38,0);
    goto LAB_1001d3dd3;
  case 6:
    puVar8 = _sqlite3_column_text16(local_38,0);
    if (puVar8 == (uchar *)0x0) goto LAB_1001d3e17;
    iVar4 = _sqlite3_column_bytes16(local_38,0);
    goto LAB_1001d3de6;
  case 7:
    puVar8 = _sqlite3_column_blob(local_38,0);
LAB_1001d3dd3:
    if (puVar8 == (uchar *)0x0) {
LAB_1001d3e17:
      iVar10 = 0;
      goto switchD_1001d3d2e_default;
    }
    iVar4 = _sqlite3_column_bytes(local_38,0);
LAB_1001d3de6:
    if (iVar4 == 0) goto switchD_1001d3d2e_default;
    uVar11 = (ulong)iVar4;
    if (bVar1) {
      uVar12 = uVar11;
      if (param_7 <= uVar11) {
        uVar12 = param_7;
      }
      iVar10 = 0x335f;
      if (uVar11 <= param_7) {
        iVar10 = 0;
      }
      dVar9 = *param_9;
      uVar11 = uVar12;
    }
    else {
      dVar9 = (double)FUN_1001c63e1(uVar11);
      *param_9 = dVar9;
      if (dVar9 == 0.0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          FUN_1006b343d(uVar7);
        }
LAB_1001d3c5f:
        FUN_1001782e9(0,0);
        iVar10 = -0x6c;
        goto switchD_1001d3d2e_default;
      }
      iVar10 = 0;
    }
    FUN_1001c631b(puVar8,dVar9,uVar11);
    break;
  case 8:
    iVar10 = _sqlite3_column_type(local_38,0);
    switch(iVar10) {
    case 1:
    case 2:
      goto switchD_1001d3e46_caseD_1;
    case 3:
      puVar8 = _sqlite3_column_text(local_38,0);
      break;
    case 4:
      puVar8 = _sqlite3_column_blob(local_38,0);
      break;
    default:
      goto switchD_1001d3e46_default;
    }
    if (puVar8 == (uchar *)0x0) {
switchD_1001d3e46_default:
      iVar10 = 0;
      uVar11 = 0;
    }
    else {
      iVar10 = 0;
      iVar4 = _sqlite3_column_bytes(local_38,0);
      uVar11 = (ulong)iVar4;
    }
    break;
  default:
    goto switchD_1001d3d2e_default;
  }
  if (param_8 != (ulong *)0x0) {
    *param_8 = uVar11;
  }
switchD_1001d3d2e_default:
  _sqlite3_finalize(local_38);
  _sqlite3_free(pcVar5);
  return iVar10;
}

