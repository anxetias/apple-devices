// name: FUN_100193976
// address: 100193976

bool FUN_100193976(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  long local_28;
  
  uVar3 = FUN_10016ff43(DAT_1008c4d98,param_1);
  puVar1 = PTR__objc_msgSend_10082c770;
  IVar4 = NSFileManager::defaultManager
                    ((ID)PTR__OBJC_CLASS___NSFileManager_10082c668,PTR_s_defaultManager_10088bfa0);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  cVar2 = (*(code *)puVar1)(uVar5,PTR_s_getRelationship_ofDirectory_inDo_10088bfb0,&local_28,0x66,0,
                            uVar3,0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  FUN_10017060f(uVar3);
  return local_28 == 0 && cVar2 == '\x01';
}

