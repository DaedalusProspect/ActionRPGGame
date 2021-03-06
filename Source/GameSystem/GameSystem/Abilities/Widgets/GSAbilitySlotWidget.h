#pragma once
#include "UserWidget.h"
#include "../GSAbilityGlobalTypes.h"
#include "GSAbilitySlotWidget.generated.h"

UCLASS(BlueprintType, Blueprintable)
class GAMESYSTEM_API UGSAbilitySlotWidget : public UUserWidget
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY()
		UGSAbilityWidget* Ability;
	UPROPERTY()
		FGSAbilitySlot SlotInfo;
	UPROPERTY()
	class UGSAbilitiesComponent* OwnerComp;
	FEventReply OnMouseButtonDown_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) override;

	void OnDragDetected_Implementation(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation) override;

	bool OnDrop_Implementation(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation) override;
};
