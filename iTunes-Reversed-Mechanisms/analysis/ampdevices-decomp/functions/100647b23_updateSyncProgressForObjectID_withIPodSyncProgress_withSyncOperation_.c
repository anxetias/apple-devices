// name: updateSyncProgressForObjectID:withIPodSyncProgress:withSyncOperation:
// address: 100647b23

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientConnection::
     updateSyncProgressForObjectID_withIPodSyncProgress_withSyncOperation_
               (ID param_1,SEL param_2,unsigned_int param_3,const_void__ param_4,
               unsigned_int param_5)

{
  double dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = DAT_1008c3488;
  dVar1 = *(double *)param_4;
  uVar4 = FUN_1001bdcb0((long)param_4 + 8,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = FUN_1001bdcb0((long)param_4 + 0x18,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  lVar6 = -1;
  if (0.0 <= dVar1) {
    lVar6 = (long)(dVar1 * _DAT_100708b48);
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,PTR_s_updateProgressForObjectID_totalU_10088da58,param_3,
             -(ulong)(dVar1 < 0.0) | 1000,lVar6,uVar4,uVar5,param_5);
  puVar2 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar2)(uVar4);
  return;
}

