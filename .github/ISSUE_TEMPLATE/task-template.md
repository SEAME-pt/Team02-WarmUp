name: Task
description: A template for creating detailed tasks with all necessary information.
title: "[Task] "
labels: 
  - task

body:
  - type: markdown
    attributes:
      value: |
        ## Task

  - type: textarea
    id: description
    attributes:
      label: Description
      description: Describe what needs to be done to complete this task.
    validations:
      required: true

  - type: dropdown
    id: priority
    attributes:
      label: Priority
      description: Select the priority level.
      options:
        - Critical
        - High
        - Medium
        - Low
    validations:
      required: true


  - type: input
    id: story_reference
    attributes:
      label: Story Reference
      description: Link to the associated Story.
      placeholder: |
        #
    validations:
      required: false

  - type: markdown
    attributes:
      value: |
        ### ⚠️ Assignees
        **Note:** Please ensure to assign at least one responsible person to this task. The task cannot proceed without an assignee.