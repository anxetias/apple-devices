// name: FUN_10039f89e
// address: 10039f89e

void FUN_10039f89e(sqlite3_context *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined4 local_34;
  
  pvVar4 = _sqlite3_user_data(param_1);
  pbVar5 = _sqlite3_value_blob((sqlite3_value *)*param_3);
  iVar2 = _sqlite3_value_bytes((sqlite3_value *)*param_3);
  uVar1 = *(undefined8 *)
           (*(long *)((long)pvVar4 + 0x10) + -8 + *(long *)((long)pvVar4 + 0x18) * 0x28);
  iVar3 = _CFArrayGetCount(*(undefined8 *)
                            (*(long *)((long)pvVar4 + 0x10) + -0x10 +
                            *(long *)((long)pvVar4 + 0x18) * 0x28));
  iVar3 = iVar3 + (int)uVar1;
  local_34 = 0;
  if (((0 < iVar2) && (0x2f < (ulong)*pbVar5)) &&
     (lVar6 = (ulong)*pbVar5 - 0x30, lVar6 < *(long *)((long)pvVar4 + 0x18))) {
    lVar6 = *(long *)((long)pvVar4 + 0x10) + lVar6 * 0x28;
    pbVar5 = pbVar5 + 1;
    iVar2 = _ucol_getBound(pbVar5,iVar2 + -1,0,1,0,0,&local_34);
    lVar11 = (long)iVar2;
    uVar7 = _CFDataCreateWithBytesNoCopy
                      (0,pbVar5,lVar11,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
    uVar1 = *(undefined8 *)(lVar6 + 0x18);
    lVar8 = _CFArrayGetCount(uVar1);
    if (lVar8 < 1) {
      uVar14 = 0xbadbeef;
    }
    else {
      lVar13 = lVar8 + -1;
      lVar12 = 0;
      do {
        uVar14 = (ulong)(lVar12 + lVar13) >> 1;
        uVar9 = _CFArrayGetValueAtIndex(uVar1,uVar14);
        lVar10 = FUN_10039fb16(uVar9,pbVar5,lVar11);
        if (lVar10 == 1) {
          lVar13 = uVar14 - 1;
        }
        else {
          if (lVar10 == 0) break;
          lVar12 = uVar14 + 1;
          if (lVar12 < lVar8) {
            uVar9 = _CFArrayGetValueAtIndex(uVar1,lVar12);
            lVar10 = FUN_10039fb16(uVar9,pbVar5,lVar11);
            if (lVar10 == 1) break;
          }
        }
      } while (lVar12 <= lVar13);
    }
    _CFRelease(uVar7);
    iVar3 = (int)uVar14 + (int)*(undefined8 *)(lVar6 + 0x20);
  }
  _sqlite3_result_int(param_1,iVar3);
  return;
}

