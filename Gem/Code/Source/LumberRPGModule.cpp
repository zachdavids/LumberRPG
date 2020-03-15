
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include <LumberRPGSystemComponent.h>

namespace LumberRPG
{
    class LumberRPGModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(LumberRPGModule, "{80D27FD1-D838-4FC7-B64E-BDEFDE88C0AA}", AZ::Module);
        AZ_CLASS_ALLOCATOR(LumberRPGModule, AZ::SystemAllocator, 0);

        LumberRPGModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                LumberRPGSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<LumberRPGSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(LumberRPG_90bb02e5126e4e2db95c43d6cf1db0a5, LumberRPG::LumberRPGModule)
