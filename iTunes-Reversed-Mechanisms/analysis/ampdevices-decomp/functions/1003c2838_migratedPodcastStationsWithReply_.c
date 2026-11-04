// name: migratedPodcastStationsWithReply:
// address: 1003c2838

/* Function Stack Size: 0x18 bytes */

void AMPDevicesFrameworkConnection::migratedPodcastStationsWithReply_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  
  lVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  IVar3 = NSError::errorWithDomain_code_userInfo_
                    ((ID)PTR__OBJC_CLASS___NSError_10082c660,
                     PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                     *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0xfffffffffffffffc,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  (**(code **)(lVar2 + 0x10))(lVar2,0,uVar4);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(lVar2);
  return;
}

