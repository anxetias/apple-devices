// name: FUN_10039f6c8
// address: 10039f6c8

void FUN_10039f6c8(sqlite3_context *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  char cVar13;
  long lVar14;
  int local_4c;
  void *local_48;
  long local_40;
  int local_38;
  int local_34;
  
  puVar4 = _sqlite3_user_data(param_1);
  pvVar5 = _sqlite3_value_text16((sqlite3_value *)*param_3);
  iVar3 = _sqlite3_value_bytes16((sqlite3_value *)*param_3);
  iVar3 = iVar3 >> 1;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
  local_48 = (void *)*puVar4;
  lVar11 = puVar4[1];
  local_38 = 0;
  pvVar6 = pvVar5;
  iVar10 = iVar3;
  local_4c = iVar3;
  local_34 = iVar3;
  if (lVar11 != 0) {
    local_40 = (long)(iVar3 * 10 + 1);
    pvVar6 = (void *)_CFAllocatorAllocate(uVar1,local_40 * 2,0);
    _memcpy(pvVar6,pvVar5,(long)iVar3 * 2);
    _utrans_transUChars(lVar11,pvVar6,&local_4c,local_40,0,&local_34,&local_38);
    iVar10 = local_34;
    if (0 < local_38) {
      _CFAllocatorDeallocate(uVar1,pvVar6);
      pvVar6 = pvVar5;
      iVar10 = iVar3;
    }
  }
  pvVar2 = local_48;
  iVar3 = _ucol_getSortKey(local_48,pvVar6,iVar10,0,0);
  local_40 = CONCAT44(local_40._4_4_,iVar3 + 1);
  pcVar7 = (char *)_CFAllocatorAllocate(uVar1,(long)(iVar3 + 1),0);
  pcVar12 = pcVar7 + 1;
  local_48 = pvVar6;
  _ucol_getSortKey(pvVar2,pvVar6,iVar10,pcVar12,iVar3);
  if ((long)puVar4[3] < 1) {
    cVar13 = '0';
  }
  else {
    lVar11 = 8;
    lVar14 = 0;
    do {
      lVar9 = puVar4[2];
      lVar8 = FUN_10039fb16(*(undefined8 *)(lVar9 + -8 + lVar11),pcVar12,(long)iVar3);
      if ((lVar8 != 1) &&
         (lVar9 = FUN_10039fb16(*(undefined8 *)(lVar9 + lVar11),pcVar12,(long)iVar3), lVar9 != -1))
      break;
      lVar14 = lVar14 + 1;
      lVar11 = lVar11 + 0x28;
    } while (lVar14 < (long)puVar4[3]);
    cVar13 = (char)lVar14 + '0';
  }
  *pcVar7 = cVar13;
  if (local_48 != pvVar5) {
    _CFAllocatorDeallocate(uVar1);
  }
  _sqlite3_result_blob(param_1,pcVar7,(int)local_40,FUN_10039faff);
  return;
}

