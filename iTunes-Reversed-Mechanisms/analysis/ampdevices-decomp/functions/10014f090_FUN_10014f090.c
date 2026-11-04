// name: FUN_10014f090
// address: 10014f090

void FUN_10014f090(long param_1)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  IVar1 = _objc_alloc(PTR__OBJC_CLASS___ICURLPerformanceMetrics_10082c5b0);
  self = PTR__OBJC_CLASS___NSNumber_10082c690;
  local_48 = &cf_requestStartTime;
  IVar2 = NSDate::date((ID)PTR__OBJC_CLASS___NSDate_10082df88,PTR_s_date_10088bc20);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_timeIntervalSince1970_10088bc80);
  IVar2 = NSNumber::numberWithDouble_((ID)self,PTR_s_numberWithDouble__10088bc48);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar2);
  local_40 = uVar4;
  IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)PTR__OBJC_CLASS___NSDictionary_10082df90,
                     PTR_s_dictionaryWithObjects_forKeys_co_10088bc30,&local_40,&local_48,1);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar2);
  IVar1 = ICURLPerformanceMetrics::initWithDictionaryRepresentation_
                    (IVar1,PTR_s_initWithDictionaryRepresentation_10088bc40,uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  IVar2 = _objc_alloc(PTR__OBJC_CLASS___ICHTTPArchive_10082c5a8);
  uVar3 = FUN_1001bdcb0(param_1 + 0x20,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  IVar2 = ICHTTPArchive::initUnboundedArchiveWithDirectoryPath_
                    (IVar2,PTR_s_initUnboundedArchiveWithDirector_10088bc38,uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  ICHTTPArchive::archiveRequest_withResponse_responseData_performanceMetrics_
            (IVar2,PTR_s_archiveRequest_withResponse_resp_10088bc00,*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),IVar1);
  (*(code *)PTR__objc_release_10082c7b0)(IVar2);
  (*(code *)PTR__objc_release_10082c7b0)(IVar1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

