// name: run
// address: 10052ac85

/* Function Stack Size: 0x10 bytes */

void AMPDevicesAgentXPCServiceListener::run(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = _objc_opt_new(&objc::class_t::DevicesClientDelegate);
  uVar7 = DAT_1008bfca0;
  puVar2 = PTR__objc_release_10082c7b0;
  DAT_1008bfca0 = uVar6;
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  uVar7 = _objc_alloc(PTR__OBJC_CLASS___NSXPCListener_10082c6f8);
  puVar5 = PTR_s_initWithMachServiceName__10088d720;
  puVar1 = PTR__objc_msgSend_10082c770;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar7,PTR_s_initWithMachServiceName__10088d720,&cf_com_apple_amp_devicesd);
  uVar7 = DAT_1008bfca8;
  DAT_1008bfca8 = uVar6;
  (*(code *)puVar2)(uVar7);
  puVar4 = PTR_s_setDelegate__10088c330;
  (*(code *)puVar1)(DAT_1008bfca8,PTR_s_setDelegate__10088c330,DAT_1008bfca0);
  puVar3 = PTR_s_resume_10088bc50;
  (*(code *)puVar1)(DAT_1008bfca8,PTR_s_resume_10088bc50);
  uVar6 = _objc_opt_new(&objc::class_t::DevicesFrameworkDelegate);
  uVar7 = DAT_1008bfcb0;
  DAT_1008bfcb0 = uVar6;
  (*(code *)puVar2)(uVar7);
  uVar7 = _objc_alloc(PTR__OBJC_CLASS___NSXPCListener_10082c6f8);
  uVar6 = (*(code *)puVar1)(uVar7,puVar5,&cf_com_apple_amp_library_devicecontents);
  uVar7 = DAT_1008bfcb8;
  DAT_1008bfcb8 = uVar6;
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar1)(DAT_1008bfcb8,puVar4,DAT_1008bfcb0);
  (*(code *)puVar1)(DAT_1008bfcb8,puVar3);
  uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSRunLoop_10082dfc0,PTR_s_currentRunLoop_10088d728);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar7,PTR_s_run_10088d6a8);
  (*(code *)puVar2)(uVar7);
  return;
}

