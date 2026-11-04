// name: FUN_100130308
// address: 100130308

undefined8 * FUN_100130308(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  char *pcVar10;
  ulong uVar11;
  long *plVar12;
  void *pvVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  if (*param_1 == 0) {
    std::__throw_system_error(1,"unique_lock::lock: references null mutex");
  }
  else if ((char)param_1[1] != '\x01') {
    puVar6 = (undefined8 *)std::mutex::lock();
    *(undefined1 *)(param_1 + 1) = 1;
    return puVar6;
  }
  pcVar10 = "unique_lock::lock: already locked";
  plVar12 = (long *)0xb;
  std::__throw_system_error(0xb,"unique_lock::lock: already locked");
  puVar6 = (undefined8 *)plVar12[1];
  if (puVar6 < (undefined8 *)plVar12[2]) {
    lVar14 = *(long *)(pcVar10 + 8);
    uVar5 = *(undefined8 *)(pcVar10 + 8);
    *puVar6 = *(undefined8 *)pcVar10;
    puVar6[1] = uVar5;
    if (lVar14 != 0) {
      LOCK();
      plVar1 = (long *)(lVar14 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    puVar6 = puVar6 + 2;
  }
  else {
    lVar14 = (long)puVar6 - *plVar12 >> 4;
    uVar2 = lVar14 + 1;
    if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012c430(plVar12);
    }
    uVar7 = plVar12[2] - *plVar12;
    uVar11 = (long)uVar7 >> 3;
    if (uVar11 <= uVar2) {
      uVar11 = uVar2;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 == 0) {
      auVar15 = ZEXT816(0);
    }
    else {
      auVar15 = FUN_1001308fa();
    }
    lVar8 = auVar15._0_8_;
    lVar14 = lVar14 * 0x10;
    lVar3 = lVar8 + lVar14;
    lVar4 = *(long *)(pcVar10 + 8);
    uVar5 = *(undefined8 *)(pcVar10 + 8);
    puVar6 = (undefined8 *)(lVar8 + lVar14);
    *puVar6 = *(undefined8 *)pcVar10;
    puVar6[1] = uVar5;
    if (lVar4 != 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    puVar6 = (undefined8 *)(lVar3 + 0x10);
    sVar9 = plVar12[1] - *plVar12;
    pvVar13 = (void *)(lVar3 - sVar9);
    _memcpy(pvVar13,(void *)*plVar12,sVar9);
    *plVar12 = (long)pvVar13;
    plVar12[1] = (long)puVar6;
    plVar12[2] = auVar15._8_8_ * 0x10 + lVar8;
    FUN_100130928();
  }
  plVar12[1] = (long)puVar6;
  return puVar6 + -2;
}

